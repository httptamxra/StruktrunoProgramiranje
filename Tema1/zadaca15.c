#include <stdio.h>
#include <math.h>
//Napishi programa kade shto kje se vnesat eden broj x. Presmetaj y spored formulata.

int main()
{
    int x;
    scanf("%d", &x);
    float y = (11*(pow(x,3)))/5+12*(pow(x,7))-3.5;
    printf("Y is:%.2f",y);
    return 0;
}
