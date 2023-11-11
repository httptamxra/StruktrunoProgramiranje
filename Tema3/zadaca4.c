#include <stdio.h>
/*Напиши програма каде преку тастатура ќе може да се внеси цел број.
Програмата треба да провери дали бројот завршува со 25.
Соодветно да се отпечати “Brojot %d zavrsuva so 25” или “Brojot %d ne zavrsuva so
25”.*/
int main() {
    int x;
    printf("Enter a number");
    scanf("%d", &x);
    if (x%10 ==5 && x/10%10 ==2)
    {
        printf("The number ends with 25");
    } else
    {
        printf("The number does not end with 25");
    }

    return 0;
}
