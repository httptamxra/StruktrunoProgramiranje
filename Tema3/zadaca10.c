#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x % 8 == 0 || y % 10 == 4) {
        printf("%d\n", x + y);
    } else
        printf("%.2f\n", pow(x, 2) + pow(y, 2));


    return 0;
}
