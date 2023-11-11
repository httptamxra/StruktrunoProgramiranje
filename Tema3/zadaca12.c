#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x > y) {
        printf(" The smaller number is %d \n", y);
    } else
        printf("The number %d is smaller\n",x);


    return 0;
}
