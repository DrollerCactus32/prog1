#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        return 1;
    }

    int *numbers = NULL;
    int count = 0;
    int capacity = 10;
    int temp;

    numbers = malloc(capacity * sizeof(int));
    if (numbers == NULL) {
        fclose(file);
        return 1;
    }

    while (fscanf(file, "%d", &temp) == 1) {
        if (count >= capacity) {
            capacity *= 2;
            int *new_numbers = realloc(numbers, capacity * sizeof(int));
            if (new_numbers == NULL) {
                free(numbers);
                fclose(file);
                return 1;
            }
            numbers = new_numbers;
        }
        numbers[count++] = temp;
    }

    fclose(file);

    if (count > 0) {
        qsort(numbers, count, sizeof(int), compare);
    }

    for (int i = 0; i < count; i++) {
        printf("%d\n", numbers[i]);
    }

    free(numbers);
    return 0;
}