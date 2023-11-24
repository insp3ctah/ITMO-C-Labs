#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Usage: ./concatenate inputfile1 inputfile2 outputfile\n");
        return 1;
    }

    FILE *file1 = fopen(argv[1], "r");
    FILE *file2 = fopen(argv[2], "r");
    FILE *outputFile = fopen(argv[3], "w");

    if (file1 == NULL || file2 == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int ch;

    // Copy contents of file1 to the output file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, outputFile);
    }

    // Copy contents of file2 to the output file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, outputFile);
    }

    printf("Files concatenated successfully.\n");

    // Close all the files
    fclose(file1);
    fclose(file2);
    fclose(outputFile);

    return 0;
}