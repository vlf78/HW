// Числа Фибоначи

#include <stdio.h>

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    if(n==1)
        printf("1");
    else
    {
        int f1=1, f2=1;
        printf("1 1 ");
        for (int i=2; i<n; i++)
        {
            int m = f1 + f2;
            f1 = f2;
            f2 = m;
            printf("%d ",f2);
        }
    }
    return 0;
}

