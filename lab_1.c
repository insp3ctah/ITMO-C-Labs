#include <stdio.h>

int main() {
    char str[1024];
    float num;
    
    printf("Enter your string: ");
    scanf("%s", str);
    printf("Your string is: %s\n", str);
    
    printf("Enter your number: ");
    scanf("%f", &num);
    printf("Your number is: %f\n", num);
    
    return 0;
}