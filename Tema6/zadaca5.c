//Напиши програма каде прелку тастатура ќе се внеси низа од 20 природни броеви и
      //ќе се пресмета производот од сите броеви кои се наоѓаат на парна позиција и
     //имаат парна вредност и сумата од сите броеви кои се наоѓаат на позиција делив
     // со 3 и имаат непарна вредност. Резултатот да се отпечати.
#include <stdio.h>
int main(){
int numbers[20];
    printf("Enter the 20 elements:");
    fill(numbers);
    print(numbers);
    operacii(numbers, &sum, &product);
}

void fill (int numbers[]){
    for (int i = 0; i <20 ; i++) {
        scanf("%d",&numbers[i]);
    }
}
void print(int numbers[]){
    for (int i = 0; i < 20; i++) {
        printf("%d", numbers[i]);
    }
}
int operacii (int numbers[]){
    int product = 1;
    int sum = 0;
    for (int i = 0; i < 20; i++) {
        if((i+1)%2==0){
            product=product*numbers[i];
            printf("%d",product);
        }else{
            if(numbers[i]%3==0) {
                sum = sum + numbers[i];
                printf("%d",sum);
            }
        }

    }
    return product,sum;
}
