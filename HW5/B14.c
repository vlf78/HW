// Посчитать числа

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,count=0;
    scanf("%d",&number);
    while(number != 0)
    {
        count++;
        scanf("%d",&number);
    }
    printf("%d",count);
    return 0;
}

