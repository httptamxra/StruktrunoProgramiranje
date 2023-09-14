#include <stdio.h>
#include <math.h>
//Napishi programa kade shto preku tastatura kje se vnesi b,h.
// Presmetaj ja vrednosta na V so formulata.

int main()
{
    int b,h;
    scanf("%d", &b);
    scanf("%d", &h);
    double A = (1.0/2.0)*b*h;
    printf("The value is %.2f", A);
    return 0;
}
