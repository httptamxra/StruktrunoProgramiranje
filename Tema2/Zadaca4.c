#include <stdio.h>

/*Напиши програма која преку тастатура ќе овозможува да се внесат две
променливи x и y.
Доделија поголемата вредност од x или y на променлива наречена maxValue и
прикажи го резултатот на екран. (реши ја задачата со помош на тернарен опратор)*/

int main()
{
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int maxValue;
    maxValue = (x >= y)? printf("X"):printf("Y");
    return 0;
}
