// три раза
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f;
    char str[101];
    signed char c;
    int count=0;
    // чтение
    f = fopen("input.txt","r");
    c=fgetc(f);
    while (!(c==EOF||c=='\n'))
    {
        str[count++] = c;
        c=fgetc(f);
    }
    str[count] = 0;
    fclose(f);
    // запись
    f = fopen("output.txt","w");
    fprintf(f,"%s, ",str);
    fprintf(f,"%s, ",str);
    fprintf(f,"%s ",str);
    fprintf(f,"%d",count);
    fclose(f);
    return 0;
}

