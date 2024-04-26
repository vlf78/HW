// Строчную в заглавную

#include <stdio.h>

char up(char c);

int main(int argc, char **argv)
{
    char c;
    while((c=getchar())!='.')
    {
        printf("%c",up(c));
    }
    return 0;
}

char up(char c)
{
    char res = c;
    if(c>='a' && c<='z')
        res = 'A' + (c-'a');
    return res;
}




