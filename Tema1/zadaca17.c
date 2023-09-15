#include <stdio.h>
#include <math.h>
//Napishi programa kade shto kje se vnesat tri broja a,x. Presmetaj y spored formulata.

int main()
{
    int a,x;
    scanf("%d", &a);
    scanf("%d", &x);
    float y = sqrt((pow(a,x) + 2*pow(x,3)) / ((5*a)/x));
    printf("Y is %.2f", y);
    return 0;
}
