#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    int sum;
    scanf("%d",&a);
    sum = a%10 + a/10%10 + a/100%10;
    printf("%d",sum);
    return 0;
}

