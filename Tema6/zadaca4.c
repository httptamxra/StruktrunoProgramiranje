/*Напиши програма каде ќе се внеси низа од 20 природни броеви и ќе се отпечатат
по 5 броеви во ред.*/
#include <stdio.h>
 int main(){
 int numbers[20];
     printf("Enter the elements of your array:");
     fill(numbers);
     print(numbers);


     return 0;
 }
void fill(int numbers[]){
    for (int i = 0; i < 20; i++) {
        scanf("%d,", &numbers[i]);

    }

}
void print(int numbers[]) {
    for (int i = 0; i < 20; i++) {

        printf("%d,", numbers[i]);
        if ((i + 1) % 5 == 0) {
            printf("\n");
        }
    }
}
