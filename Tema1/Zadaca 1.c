#include <stdio.h>
#include <math.h>
//Zadaca 1
//Napishi programa kade shto preku tastatura kje moze da se vnesat dva celi broevi.
// Pronajdi go zbirot na broevite i proveri dali e paren. Rezultatot da se ispecati na ekran.

int main()
{
    int number1, number2;
  
    scanf("%d",&number1);
    scanf("%d",&number2);
  
    int result = number1 - number2;
  
    printf("The result is:%d", result %2==0);
  
    return 0;
}
