#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    int mult;
    scanf("%d",&a);
    mult = (a%10) * (a/10%10) * (a/100%10);
    printf("%d",mult);
    return 0;
}

