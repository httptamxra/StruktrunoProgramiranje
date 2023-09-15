#include <stdio.h>
#include <math.h>
//Napishi programa kade shto kje se vnesat tri broja a,x,b. Presmetaj y spored formulata.

int main()
{
    int a,b,x;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &x);
    float y = sqrt((pow(a,2)+3) / (1+(pow(b,3)/a))) / ((a/pow(b,4)) + sqrt(1/(a+b)));
    printf("Y is: %.2f", y);
    return 0;
}
