// Функция - Модуль числа

#include <stdio.h>

int mod(int a)
{
    if(a<0)
        return -a;
    else
        return a;
}

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    printf("%d",mod(number));
    return 0;
}

