// Cумма от 1 до N

#include <stdio.h>

int summator(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    return sum;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    printf("%d ",summator(n));
    return 0;
}

