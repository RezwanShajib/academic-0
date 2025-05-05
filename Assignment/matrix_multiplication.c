#include <stdio.h>

void multiplyMatrix(int rowsA, int rowsB, int colsA, int colsB, int matA[rowsA][colsA], int matB[rowsB][colsB], int result[rowsA][colsB]){

    for (int i = 0; i < rowsA; i++) { //Iterating through the rows of the resultant matrix
        for (int j = 0; j < colsB; j++) { //Trerating through the columns of the resultant matrix
            result[i][j] = 0; //initialize the resultant matrix with 0
            for (int k = 0; k < colsA; k++) { //Iterating through the columns of matrix A (=rows of matrix B) 
                result[i][j] += (matA[i][k] * matB[k][j]); //Multiplying the elements of matrix A and B and adding them to the resultant matrix
            }
        }
    }
}


int main() {
    int matA[3][4] = {{1,2,3,7},
                      {4,5,6,7},
                      {7,8,9,7}};

    int matB[4][3] = {{0,0,0},
                      {4,5,6},
                      {7,8,9},
                      {2,5,7}};
                      
    int rowsA = (sizeof(matA) / sizeof(matA[1]));
    int rowsB = (sizeof(matB) / sizeof(matB[1]));

    int colsA = (sizeof(matA[1]) / sizeof(matA[1][1]));
    int colsB = (sizeof(matB[1]) / sizeof(matB[1][1]));

    // printf("Dimension of matrix A is %dx%d\n", rowsA, colsA);
    // printf("Dimension of matrix B is %dx%d\n", rowsB, colsB);

    if(colsA != rowsB){
        printf("Matrix multiplication is not possible.\nError: columns of matrix A is not equal to rows of matrix B.");
        return 1;
    }

    int result[rowsA][colsB];
    multiplyMatrix(rowsA, rowsB, colsA, colsB, matA, matB, result);

    printf("The resultant matrix is:\n");

    for(int i = 0; i < rowsA; i++){
        for(int j = 0; j < colsB; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}