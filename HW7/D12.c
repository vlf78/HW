// Вывести k раз

#include <stdio.h>

void recursPrint(int digit, int limit)
{
    for(int i=1; i<=digit; i++)
    {
        printf("%d ",digit);
        limit--;
        if(limit==0)
            return;
    }
    recursPrint(digit+1,limit);
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    recursPrint(1,n);
    return 0;
}








