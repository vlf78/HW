// Простые множители числа

#include <stdio.h>

void print_simple(int n);

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    print_simple(n);
    return 0;
}

void print_simple(int n)
{
    while(n!=1)
    {
        for(int i=2;i<=n;i++)
        {
            int ost = n%i;
            if(ost==0)
            {
                printf("%d ",i);
                n /= i;
                break;
            }
        }
    }
}




