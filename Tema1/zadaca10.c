#include <stdio.h>
#include <math.h>
//Napishi programa kade shto preku tastatura kje se vnesi r,h.
// Presmetaj ja vrednosta na V so formulata.

int main()
{
    int r,h;
    int pi =3.14;
    scanf("%d", &r);
    scanf("%d", &h);
    int V = pi*sqrt(r)*h;
    printf("V is:%d", V);
    return 0;
}
