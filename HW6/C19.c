// Сумма цифр в тескте

#include <stdio.h>

int digit_to_num(char c);

int main(int argc, char **argv)
{
    int sum=0;
    char c;
    while( (c=getchar())!='.')
    {
        sum += digit_to_num(c);
    }
    printf("%d",sum);
    return 0;
}

int digit_to_num(char c)
{
    int res=0;
    if(c>='0'&&c<='9')
        res = c - 48;
    return res;
}






