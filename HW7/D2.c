// Сумма от 1 до N

#include <stdio.h>

int sum(int n)
{
    if(n<1)
        return 0;
    return n+sum(n-1);
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}








