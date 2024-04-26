// Факториал

#include <stdio.h>
#include <inttypes.h>

uint32_t factorial(int n);

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    printf("%" PRIu32, factorial(n));
    return 0;
}

uint32_t factorial(int n)
{
    uint32_t fact = 1;
    for(int i=1;i<=n;i++)
        fact *= i;
    return fact;
}




