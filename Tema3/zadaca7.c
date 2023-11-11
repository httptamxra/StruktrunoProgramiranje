#include <stdio.h>
#include <math.h> 
/*Напиши програма каде преку тастатура ќе може да се внеси цел број.
Ако бројот е парен да се пресмета неговиот квадрат, во спротивно да се пресмета
неговиот куб.*/
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0) {
        printf("Square of %d is: %f\n", x, pow(x, 2));
    } else {
        printf("Square root of %d is: %f\n", x, sqrt(x));
    }

    return 0;
}
