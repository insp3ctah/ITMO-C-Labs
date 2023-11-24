#include <stdio.h>
#include <string.h>

void compare_strings(char str1[], char str2[]) {
    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else{
        printf("The strings are not equal.\n");
    }
}

void copy_string(char source[], char destination[]) {
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);
}

void string_length(char str[]) {
    int length = strlen(str);
    printf("length: %d\n", length);
}

void last_occurrence(char str[], char ch) {
    char* lastOccurrence = strrchr(str, ch);
    if (lastOccurrence != NULL) {
        printf("last occurance index: %ld\n", lastOccurrence - str);
    } else {
        printf("Character not found in the string.\n");
    }
}

void substring_length(char str1[], char str2[]) {
    int length = strspn(str1, str2);
    printf("substring len: %d\n", length);
}

int main() {
    char str1[100];
    char str2[100];
    char ch;

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    printf("Enter a character to search: ");
    scanf(" %c", &ch);
    char str_second[100];
    for(int i = 0; i < 100; i++){
        str_second[i] = str2[i];
    }

    compare_strings(str1, str2);
    copy_string(str1, str2);
    string_length(str1);
    last_occurrence(str1, ch);
    substring_length(str1, str_second);

    return 0;
}