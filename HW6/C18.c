// Количество цифр в тескте

#include <stdio.h>

int is_digit(char c);

int main(int argc, char **argv)
{
    int count=0;
    char c;
    while( (c=getchar())!='.')
    {
        if(is_digit(c)==1)
            count ++;
    }
    printf("%d",count);
    return 0;
}

int is_digit(char c)
{
    if(c>='0'&&c<='9')
        return 1;
    else
        return 0;
}






