#include <stdio.h>
#define N 5

void task1();
void task2();
void task3();
void task4();
void printMatrix(int matrix[][N]);


int main() {

    task1();
    printf("\n");
    task2();
    printf("\n");
    printf("\n");
    task3();
    printf("\n");
    task4();
    return 0;
} 

void printMatrix(int matrix[][N]){
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void task1() {
    int matrix[N][N];
    int num = 1;

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            matrix[i][j] = num++;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void task2() {
    int array[N];

    for(int i = 0; i < N; i++) {
        array[i] = i+1;
        printf("%d ", array[i]);
    }

    printf("\n");
    
    for (int i = N - 1; i > -1; i--)
          printf("%d ",array[i]); 
}   

void task3() {
    int matrix[N][N];
    
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            matrix[i][j] = 1;

    for(int i = 0; i < N; i++)
        for(int j = 0; j < N - 1 - i; j++)
            matrix[i][j] = 0;
        
    printMatrix(matrix);
}

void task4() {
    
    int matrix[N][N];
    int num = 1;    

    for(int i = 0; i < N / 2; i++) {
        
        for(int j = i; j < N - i; j++)
            matrix[i][j] = num++;

        for(int j = i + 1; j < N - i; j++)
            matrix[j][N-1-i] = num++;

        for(int j = N - 2 - i; j >= i; j--)
            matrix[N - 1 - i][j] = num++;
        
        for(int j = N - 2 - i; j > i; j--)
            matrix[j][i] = num++;
    }
    
    matrix[N / 2][N / 2] = N * N; 
    
    printMatrix(matrix);   
}
