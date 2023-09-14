#include <stdio.h>
#include <math.h>
//Napishi programa kade shto preku tastatura kje se vnesi s.
// Presmetaj ja vrednosta na V so formulata.

int main()
{
    int s;
    scanf("%d", &s);
    int V = pow(s, 3);
    printf("The volume of the cube is: %d", V);
    return 0;
}
