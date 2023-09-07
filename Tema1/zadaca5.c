#include <stdio.h>
//Napishi programa kade shto preku tastatura kje vnesish tri broevi l, w, h i pronadi go volumenot  spored formulata za volumen.
//Rezultatot otpecati go na ekran.

int main()
{
    int l, w, h;
    printf("Enter your first number:");
    scanf("%d", &l);
    printf("Enter your second number:");
    scanf("%d", &w);
    printf("Enter your last number:");
    scanf("%d", &h);
    int V = (l*w*h);
    printf("The volume is: %d", V);
    return 0;
}
