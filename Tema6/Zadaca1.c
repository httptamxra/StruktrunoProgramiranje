#include <stdio.h>
/*Напиши програма каде преку тастатура ќе се внеси низа од 10 природни броеви и
ќе се пресмета збир на сите парни вредности. Резултатот да се отпечати на екран.*/
int main(){
    int numbers[10];
    int number;
    printf("Enter the 10 elements of your array:");
    fill(numbers);
    print(numbers);
int sum = sumofevennumbers(numbers);


    return 0;
}
void fill (int numbers[]){
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
        int number;
        numbers[i] = number;

    }
}
void print (int numbers[]){
    for (int i = 0; i <10; i++) {
        printf("%d",numbers[i]);
    }

}
int sumofevennumbers (int numbers[]){
    int sum = 0;
    for (int i = 0; i < 10; i++) {

       if(numbers[i]%2==0){

           sum=sum + numbers[i];
           printf("The sum is:%d",sum);
       }

    }
    return sum;
}
