//2. Напиши програма каде за внесен број ќе се провери дали бројот е делив со
//најголемата цифра која ја содржи. Резултатот да се отпечати.
#include <stdio.h>
 int main(){
    int number;
     printf("Enter a number:");
     scanf("%d",&number);
     checking(number);
     return 0;
}
int checking(int number) {
    int maxDigit = 0;
    while (number != 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    if (number % maxDigit == 0) {
        printf("The number %d is divisible by its largest digit %d.\n", number, maxDigit);
    } else {
        printf("The number %d is not divisible by its largest digit %d.\n", number, maxDigit);
    }

    return 0;
}
