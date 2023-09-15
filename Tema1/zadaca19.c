#include <stdio.h>
#include <math.h>
//Napishi programa kade shto kje se vnesat tri broja a,x,b. Presmetaj y spored formulata.

int main()
{
    int a,b,x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);
    float y = (pow(a,3) + (2/(x+b))) / sqrt(5*a+pow(b,2));
    printf("Y is: %.2f", y);
    return 0;
}
