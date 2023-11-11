#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x>y) {
        printf("%d\n", x);
    } else
        printf("%d", y);


    return 0;
}
