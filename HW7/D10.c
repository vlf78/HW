// Проверка на простоту

#include <stdio.h>

int is_prime(int n, int delitel)
{
    if (n == delitel)
        return 1;
    if ((n > 1) && (n%delitel != 0))
        return is_prime(n, delitel + 1);
    else
        return 0;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    is_prime(n,2) ? printf("YES") : printf("NO");
    return 0;
}








