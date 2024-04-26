// Функция - Степень числа

#include <stdio.h>

int power(int n, int p)
{
    int rez=1;
    for(int i=1; i<=p; i++)
    {
        rez *= n;
    }
    return rez;
}

int main(int argc, char **argv)
{
    int n,p;
    scanf("%d%d",&n,&p);
    printf("%d",power(n,p));
    return 0;
}

