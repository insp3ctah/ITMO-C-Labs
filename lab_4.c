#include <stdio.h>

int main(){
    int number;
    scanf("%d",&number);

    int inrange = number >= 1 && number <= 1000;
    printf("%d\n",inrange);

    int bit_value = (number >> 2) & 1;
    printf("%d",bit_value);
}