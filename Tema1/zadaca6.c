#include <stdio.h>
#include <math.h>
//Napishi programa kade shto preku tastatura kje vnesish eden broj (a).
//Pronajdi ja plostinata na A spored formulata.
int main()
{
    int a;
    printf("Enter your value for a:");
    scanf("%d",&a);
    float A = (sqrt(3) / 4) * pow(a, 2);
    printf("The result is:%lf",A);
    return 0;
}
