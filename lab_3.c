#include <stdio.h>

int main(){
    int first_number;
    scanf("%x", &first_number);

    printf("%o\n", first_number);

    printf("%n\n", first_number << 3);

    printf("%o\n", first_number);

    printf("%o\n", ~first_number);

    int second_number;

    scanf("%o", &second_number);

    int xor_result = first_number ^ second_number;
    printf("XOR result in octal: %o\n", xor_result);
    
}