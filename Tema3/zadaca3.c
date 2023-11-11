#include <stdio.h>
/*Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот завршува со цифрата 9.
Соодветно да се отпечати “Brojot %d zavrsuva so 9” или “Brojot %d ne zavrsuva so 9”.*/
int main() {
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if ( x%10 == 9)
    {
        printf("The number ends with the number 9.");
    }

    return 0;
}
