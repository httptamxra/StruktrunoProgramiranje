#include <stdio.h>
//Napishi programa kade shto preku tastatura kje vnesish tri broevi b,h,l i pronadi go volumenot  spored formulata za volumen.
//Rezultatot otpecati go na ekran.

int main()
{
    int b,h,l;
    printf("Enter your first number:");
    scanf("%d", &b);
    printf("Enter your second number:");
    scanf("%d", &h);
    printf("Enter your last number:");
    scanf("%d", &l);
    float V = (b*h*l)/2;
    printf("The volume is: %lf", V);
    return 0;
}
