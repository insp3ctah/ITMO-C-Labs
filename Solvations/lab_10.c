#include <stdio.h>
#include <stdlib.h>

void num_to_array(int number, int **digits, int *length) {
    int temp = number;
    int counter = 0;
    while (temp != 0) {
        temp /= 10;
        counter++;
    }
    *digits = (int *)malloc(counter * sizeof(int));
    temp = number;
    for (int i = counter - 1; i >= 0; i--) {
        (*digits)[i] = temp % 10;
        temp /= 10;
    }
    *length = counter;
}

void sum_of_digits(int number, int *sum) {
    int temp = number;
    while (temp != 0) {
        *sum += temp % 10;
        temp /= 10;
    }
}

int main() {
    int number_to_digits, number_to_sum;
    printf("Enter a natural number to convert into an array: ");
    scanf("%d", &number_to_digits);
    printf("Enter a natural number to get the sum of its digits: ");
    scanf("%d", &number_to_sum);

    int *digits;
    int length;
    int sum = 0;

    num_to_array(number_to_digits, &digits, &length);
    sum_of_digits(number_to_sum, &sum);

    printf("Array of digits: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");
    printf("Sum of digits: %d\n", sum);

    free(digits);

    return 0;
}