#include<stdio.h>

void addition(int mat1[3][3], int mat2[3][3]);
void subtraction(int mat1[3][3], int mat2[3][3]);
void multiplication(int mat1[3][3], int mat2[3][3]);

void addition (int mat1[3][3], int mat2[3][3]) {
    
    int i, j, res;
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            res = mat1[i][j] + mat2[i][j];
            printf("%d  ", res);
        }
        printf("\n");
    }
}

void subtraction (int mat1[3][3], int mat2[3][3]) {
    
    int i, j, res[3][3];
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            res[i][j] = mat1[i][j] - mat2[i][j];
            printf("%d  ", res[i][j]);
        }
        printf("\n");
    }
}

void multiplication (int mat1[3][3], int mat2[3][3]) {
    
    int i, j, res[3][3];
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            res[i][j] = mat1[i][j] * mat2[i][j];
            printf("%d  ", res[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    
    int m1[3][3] = {{7,2,3}, {4,9,1}, {7,2,15}};
    int m2[3][3] = {{14,12,7}, {6,4,15}, {11,1,8}};
    
    printf("Addition:\n");
    addition(m1, m2);
    
    printf("\nSubtraction:\n");
    subtraction(m1, m2);
    
    printf("\nMultiplication:\n");
    multiplication(m1, m2);
    
}
