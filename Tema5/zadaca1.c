//Напиши функција која е потребно да провери дали даден број е прост (бројот е
//зададен како аргумент во функцијата). Функцијата треба да врати 0, доколку бројот
//не е прост и 1, доколку бројот е прост.
#include <stdio.h>

int isPrime (int number){
    for (int i = 0; i < number; i++) {
    if(number%i==0){
        return 1;
    }else
    {
        return 0;
    }
    }
    return 0;
}

int main(){
    int number;
    printf("Enter a number:");
    scanf("%d",&number);
    isPrime(number);
    return 0;
}
