#include <stdio.h>
#include <math.h>
//Napishi programa kade shto kje se vnesat tri broja a,x,z. Presmetaj y spored formulata.

int main()
{
    int a,x,z;
    scanf("%d", &a);
    scanf("%d", &x);
    scanf("%d", &z);
    float y  = (11*(pow(a,2)/pow(a,3))) + ((pow(x,3) / sqrt(9*x + 0.5)));
    printf("Y is:%.2f",y);
    return 0;
}
