// Функция по формуле

#include <stdio.h>

int f(int x)
{
    if(x<-2)
        return 4;
    if(x>=2)
        return x*x+4*x+5;
    return x*x;
}

int main(int argc, char **argv)
{
    int x,max=0;
    scanf("%d",&x);
    while(x!=0)
    {
        int res = f(x);
        max = max > res ? max : res;
        scanf("%d",&x);
    }
    printf("%d ",max);
    return 0;
}

