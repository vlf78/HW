// Сумма цифр четна

#include <stdio.h>

int chet(int number);

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    chet(number) ? printf("YES") : printf("NO");
    return 0;
}

int chet(int number)
{
    int sum=0;
    int res=0;
    while(number!=0)
    {
        sum += number%10;
        number /= 10;
    }
    if(sum%2==0)
        res=1;
    return res;
}






