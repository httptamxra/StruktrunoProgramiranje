#include <stdio.h>
#include <math.h>
//Napishi programa kade shto preku tastatura kje se vnesi r.
// Presmetaj ja vrednosta na V so formulata.
int main()
{
    int r;
    double pi = 3.14;
    scanf("%d", &r);
    double V = (3.0 / 4.0) * pi * pow(r, 3);
     printf("The volume of the sphere is: %lf", V);
    return 0;
}
