/*Напиши програма каде преку тастатура ќе се внеси низа од 20 природни броеви и
        ќе се отпечатат сите елементи кои имаат поголема вредност од својата позиција.*/
#include <stdio.h>
 int main(){
 int numbers[20];
     printf("Enter the elements of your array:");
     fill(numbers);
     print(numbers);
int posi= pose(numbers);

     return 0;
 }
void fill(int numbers[]){
    for (int i = 0; i < 20; i++) {
        scanf("%d,", &numbers[i]);

    }

}
void print(int numbers[]){
    for (int i = 0; i < 20; i++){
        printf("%d,", numbers[i]);
    }
}
int pose( int numbers[], int number){
    for (int i = 0; i < 20; i++) {
        numbers[i]=number;
        if(numbers[i]>number){
            int num= number;
            printf("%d,", num);
        }

    }
    return 0;
 }
