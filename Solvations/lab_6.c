#include <stdio.h>
#include <stdlib.h>

int main() {
    int* array = (int*)malloc(sizeof(int) * 8);
    array[0] = -8;
    array[1] = 8;
    array[2] = 11;
    array[3] = 2;
    array[4] = 64;
    array[5] = 67;
    array[6] = 55;
    array[7] = 32;

    int* ptr = array;

    printf("Array elements:\n");
    printf("Index\tValue\n");
    for (int i = 0; i < 8; i++) {
        printf("%d\t%d\n", i, *ptr);
        ptr++;
    }

    free(array);

    return 0;
}