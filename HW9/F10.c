// Упаковать строку

#include <stdio.h>

int main(int argc, char **argv)
{
    char c;
    char prev;
    int count=1;
    prev = getchar();
    while((c=getchar())!='.')
    {
        if(prev!=c)
        {
            printf("%c%d",prev,count);
            prev = c;
            count=1;
        } else
        {
            count++;
        }
    }
    printf("%c%d",prev,count); // последний

    return 0;
}

