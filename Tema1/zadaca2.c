#include <stdio.h>
//Napishi programa kade shto preku tastatura kje se vnesat dva decimalni broevi.
//Pronajdi go nivniot proizvod i porveri dali e deliv so 7 ili 11.
//Rezultatot ispecati go na ekran.

int main()
{
    int number1, number2;
    scanf("%lf", &number1);
    scanf("%lf", &number2);
    int result = number1 * number2;
    printf("The result is: %lf", (result % 7 == 0) || (result % 11 == 0));
    return 0;
}
