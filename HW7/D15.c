// Печать все нечетные

#include <stdio.h>

int max_find(int max)
{
    int number;
    scanf("%d",&number);
    if(number == 0)
        return max;
    if(number>=max)
        max = number;
    max = max_find(max);
    return max;
}

int main(int argc, char **argv)
{
    printf("%d",max_find(-32767));
    return 0;
}

