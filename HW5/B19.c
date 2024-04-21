// Сумма цифр равна 10

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,sum=0;
    scanf("%d",&number);
    while(number!=0)
    {
        sum += number%10;
        number /= 10;
    }
    sum == 10 ? printf("YES") : printf("NO");
    return 0;
}

