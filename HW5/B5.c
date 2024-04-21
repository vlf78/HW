// Сумма цифр

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,sum=0;
    scanf("%d",&number);
    while(number != 0)
    {
        sum += number%10;
        number = number/10;
    }
    printf("%d",sum);
    return 0;
}

