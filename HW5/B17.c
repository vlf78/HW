// Счастливые числа

#include <stdio.h>

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    for(int i=10;i<=number;i++)
    {
        int sum=0,mul=1,tmp=i;
        while(tmp!=0)
        {
            int digit = tmp%10;
            sum += digit;
            mul *= digit;
            tmp /= 10;
        }
        if(sum == mul)
            printf("%d ",i);
    }
    return 0;
}

