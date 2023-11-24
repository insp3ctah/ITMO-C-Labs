#include <stdio.h>

void multiply_matrices(int matrix1[2][2], int matrix2[2][2]) {
    int result[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < 2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int matrix1[2][2] = {{1, 0}, {1, 4}};
    int matrix2[2][2] = {{1, 2}, {0, 1}};
    int arr_size = 9;
    int arr[] = {88, 112, 6467, 325, 878, 3, 77, 8, 99 };
    
    printf("Index: ");
    for (int i = 0; i < arr_size; i++){
        printf("%d ", i);
    }
    printf("\n");
    printf("Value: ");

    for (int i = 0; i < arr_size; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    multiply_matrices(matrix1, matrix2);
}