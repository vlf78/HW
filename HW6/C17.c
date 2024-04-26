// Цифры по возрастанию

#include <stdio.h>

int is_happy_number(int n);

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    is_happy_number(number) ? printf("YES") : printf("NO");
    return 0;
}

int is_happy_number(int n)
{
    int sum=0,mul=1;
    while(n!=0)
    {
        int digit = n%10;
        sum += digit;
        mul *= digit;
        n /= 10;
    }
    if(sum == mul)
        return 1;
    else
        return 0;
}






