
#include <stdio.h>

int main(int argc, char **argv)
{
    int number,a,b,c,max;
    scanf("%d",&number);
    c = number%10;
    b = number/10%10;
    a = number/100%10;
    max = a > b ? a : b;
    max = max > c ? max : c;
    printf("%d",max);
    return 0;
}

