// Наименьшая и наибольшая цифра

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,min=9,max=0;
    scanf("%d",&number);
    while(number != 0)
    {
        int digit = number%10;
        min = min < digit ? min : digit;
        max = max > digit ? max : digit;
        number /= 10;
    }
    printf("%d %d",min,max);
    return 0;
}

