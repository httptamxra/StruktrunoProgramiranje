/*Напиши програма каде преку тастатура ќе се внеси низа од 10 природни броеви и
        ќе се избројат колку елементи се наоѓаат во интервал [10, 40]. Резултатот да се
        отпечати.*/

#include <stdio.h>

int main(){
    int numbers[10];
    printf("Enter the elements fo your array:");
    fill(numbers);
    printf("The numbers are:");
    print(numbers);
    int count = counting(numbers);
    printf("numbers %d", count);

    return 0;
}
void fill(int numbers[]){
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

    }

}
void print(int numbers[]){
    for (int i = 0; i < 10; i++){
        printf("%d", numbers[i]);
    }
}

int counting (int numbers[]){
    int counter = 0;
    for (int i = 0; i < 10; i++) {
        if(numbers[i]<=10&&numbers[i]>=40){
            counter++;
            printf("%d", counter);
        }else
            printf("\n");

    }
    return counter;
}
