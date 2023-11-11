#include <stdio.h>
/*Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот е делив со 3 и завршува со цифрата 5.
Соодветно да се отпечати “Brojot %d e deliv so 3 i zavrsuva so 5” или “Brojot %d ne
go ispolnuva uslovot da e deliv so 3 i da zavrsuva so 5”.*/
int main() {
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x%3==0 && x%10==5)
    {
        printf("The number is divisible with 3 and it ends with 5");
    } else
    {
        printf("The number is not divisible with 3 does not end with 5");
    }

    return 0;
}
