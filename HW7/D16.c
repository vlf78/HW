// Точная степень двойки

#include <stdio.h>

int is2pow(int n)
{
    if(n==1)
        return 1;
    if(n%2!=0)
        return 0;
    return is2pow(n/2);
}

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    is2pow(number) ? printf("YES") : printf("NO");
    return 0;
}

