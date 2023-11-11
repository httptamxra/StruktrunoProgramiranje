#include <stdio.h>
/*Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот е делив со 61 и соодветно да отпечати
“Brojot %d e deliv so 61” или “Brojot %d ne e deliv so 61”.*/
int main() {
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if ( x%61==0)
    {
        printf("The number is divisible with 61.");
    }

    return 0;
}
