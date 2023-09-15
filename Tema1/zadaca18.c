#include <stdio.h>
#include <math.h>
//Napishi programa kade shto kje se vnesat tri broja a,x,b. Presmetaj y spored formulata.

int main()
{
    int a,b,x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);
    float y = pow((pow(a,4) + 7*a*pow(b,3)*pow(x,2)), 2) / sqrt(pow(x,a));
    printf("Y is: %.2f", y);
    return 0;
