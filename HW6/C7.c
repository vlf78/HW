// Перевести число N в систему счисления P

#include <stdio.h>

int notation(int n, int p);

int main(int argc, char **argv)
{
    int n,p;
    scanf("%d%d",&n,&p);
    printf("%d ",notation(n,p));
    return 0;
}

// решение взято из подсказки, так изящно сделать я бы не смог
int notation(int n, int p)
{
    int remainder;
    int exponent = 1;
    int res = 0;
    for(; n > 0; n /= p)
    {
        remainder = n % p;
        res += remainder * exponent;
        exponent *= 10;
    }
    return res;
}




