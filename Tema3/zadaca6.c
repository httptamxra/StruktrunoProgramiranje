#include <stdio.h>
/*Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот е делив со 6 или завршува со цифрата
4.*/
int main() {
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x%6==0 || x%10==4)
    {
        printf("The number is divisible with 6 or it ends with 4");
    } else
    {
        printf("The number is not divisible with 6 and  does not end with 5");
    }

    return 0;
}
