#include <stdio.h>

/*Напиши програма која преку тастатура ќе овозможува да се внесат две
променливи x и y.
Доделија апсолутната разлика помеѓу променливите a и b на променлива наречена
absDif и прикажи го резултатот на екран. (реши ја задачата со помош на тернарен
опратор).*/


int main()
{
    int x, y, absDif;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    absDif = (x > y) ? (x - y) : (y - x);
    printf("The absolute difference between %d and %d is %d\n", x, y, absDif);

    return 0;
}

