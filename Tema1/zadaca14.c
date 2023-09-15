#include <stdio.h>
#include <math.h>
//Napishi programa kade shto kje se vnesat dva broja a, b.Presmetaj y spored formulata.

int main()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    float y = ((pow(a,3)) / 5) + ((5*(pow(a,2))) / b) - ((12*b) / (pow(a,4))) + 2.1;
    printf("Y is: %.2f", y);
    return 0;
}
