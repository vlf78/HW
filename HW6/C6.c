// Сколько зёрен на клетке

#include <stdio.h>

unsigned long long int grain_in_cell(int n)
{
    unsigned long long int sum=1;
    for(int i=2;i<=n;i++)
    {
        sum *= 2;
    }
    return sum;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    printf("%llu ",grain_in_cell(n));
    return 0;
}

