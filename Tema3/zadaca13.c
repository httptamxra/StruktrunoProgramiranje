#include <stdio.h>
#include <math.h>

int main() {
    int x, y,z;
    printf("Enter two numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x > y && x > z) {
        printf(" MAX: %d \n", x);
    }
     else if(y>x && y>z)
        {
            printf(" MAX: %d \n", y);
        } else

        printf(" MAX: %d \n", z);


    return 0;
}
