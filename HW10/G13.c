// изменить расширение
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f1, *f2;
    char s[1000],c;
    int len=0,slash=0,point=0;
    f1 = fopen("input.txt","r");
    while((c=fgetc(f1))!='\n')
    {
        if(c=='/')
            slash = len;
        else if (c=='.')
            point = len;
        s[len++] = c;
    }
    fclose(f1);

    if(point>slash)
        len = point;

    f2 = fopen("output.txt","w");
    for(int i=0; i<len; i++)
    {
        fprintf(f2,"%c",s[i]);
    }
    fprintf(f2,"%s",".html");
    fclose(f2);
    return 0;
}

