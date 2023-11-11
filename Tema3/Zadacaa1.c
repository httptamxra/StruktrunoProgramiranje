#include <stdio.h>
/*Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот се наоѓа во интервал од 30 до 50 и
соодветно треба да се отпечати “Brojot %d pripaga na intervalot [30, 50]”.*/
int main() {
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (30 < x < 50)
    {
        printf("The number is in the interval of 30 and 50");
    }

    return 0;
}
