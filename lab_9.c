#include <stdio.h>
#include <stdbool.h>

bool isPrime(int number) {
    if (number < 2) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int number;
    scanf("%d", &number);
    char str[1];
    sprintf(str, "%d", number);
    printf("%s\n", str);
    
    int limit;

    printf("Enter a number: ");
    scanf("%d", &limit);

    printf("Prime numbers up to %d:\n", limit);
    for (int i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}