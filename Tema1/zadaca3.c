#include <stdio.h>
//Napishi programa kade shto preku tastatura kje se vnesi cel broj.
//Proveri dali e deliv so 17.

int main()
{
    int number1;
    scanf("%d", &number1);
    int result = number1*1;
    printf("The result is: %d", result %17==0);
    return 0;
}
