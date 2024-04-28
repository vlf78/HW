// Печать все нечетные

#include <stdio.h>

void print_nechet()
{
    int number;
    scanf("%d",&number);
    if(number!=0)
    {
        if(number%2!=0)
            printf("%d ",number);
        print_nechet();
    }
}

int main(int argc, char **argv)
{
    print_nechet();
    return 0;
}

