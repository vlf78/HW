// Проверка на палиндром
#include <stdio.h>
#include <string.h>


int is_palindrom(char str[])
{
    char str2[1000];
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        str2[len-i-1] = str[i];
    }
    str2[len]  = 0;

    // printf("%s ",str);
    // printf("%s",str2);

    if(strcmp(str,str2))
        return 0;
    return 1;
}

int main(int argc, char **argv)
{
    FILE *f;
    char str[1000];
    signed char c;
    int len =0;
    f = fopen("input.txt","r");
    c=fgetc(f);
    while(!(c=='\n'||c==EOF))
    {
        str[len++] = c;
        c=fgetc(f);
    }
    str[len] = 0;
    fclose(f);

    f = fopen("output.txt","w");
    if(is_palindrom(str)==1)
        fprintf(f,"YES");
    else
        fprintf(f,"NO");
    fclose(f);
    return 0;
}

