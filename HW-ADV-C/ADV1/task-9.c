// Весы

#include <stdio.h>

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    int left = number;
    int right = 0;
    int stepen = 0;
    int value = 1;
    int count = 1;

    // находим максимальное число чтобы перебить груз
    while(right==0)
    {
        if(value>=left)
        {
            right = value;
            break;
        }
        stepen++;
        value *= 3;
    }

    // printf("%d %d \n",left,right);

    // далее корректируем пока не сравняется лево и право, но в обратную сторону
    while(stepen > 0)
    {
        if(left==right)
            break;
        stepen--;
        value = value/3;
        if(right >= left+value)
            {
                left += value;
                count++;
            }
        // printf("%d %d %d %d \n",left,right,stepen,value);
    }

    if(left!=right)
        count = -1;

    // есть ещё ограничение на вместимость чаши
    if(left > 1000000)
        count = -1;

    printf("%d",count);

    return 0;
}

