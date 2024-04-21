// Две одинаковые цифры рядом

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,previous=-1,res=0;
    scanf("%d",&number);
    while(number != 0)
    {
        int digit = number%10;
        if (digit==previous)
        {
            res = 1;
            break;
        }
        previous = digit;
        number = number/10;
    }
    res ? printf("YES") : printf("NO");
    return 0;
}

