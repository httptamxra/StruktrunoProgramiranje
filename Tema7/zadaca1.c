//Да се напиши програма со која ќе може да се внеси преку тастатура матрица од
//3х4 и да се определи сумата на сите парни вредности. Резултатот да се отпечати.
#include <stdio.h>
int main(){
int matrix[3][4];
insertmatrix(matrix);
printmatrix(matrix);
int sum = suma(matrix);
    printf("Sum of even values: %d\n", sum);
return 0;
}
void insertmatrix(int matrix[][]){
    printf("Enter the elements:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}
void printmatrix( int matrix[][]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; 4 < m; j++) {
            printf("%d", matrix[i][j]);

        }
        printf("\n");

    }
}
int suma (int matrix[][]){
    int sum=0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if(matrix[i][j]%2==0)
                sum+=matrix[i][j];
        }

    }
    return sum;
}
