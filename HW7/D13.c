// Печать простых множителей

#include <stdio.h>

void print_simple(int n, int delitel)
{
    if(n==1)
        return;
    if(n==delitel)
        printf("%d ",delitel);
    else if(n%delitel==0)
    {
        printf("%d ",delitel);
        print_simple(n/delitel,2);
    }
    else
        print_simple(n,delitel+1);
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    print_simple(n,2);
    return 0;
}

