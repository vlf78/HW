// Последний символ - номера
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f;
    char string[1001];
    int len = 0;
    f = fopen("input.txt","r");
    signed char c=fgetc(f);
    while (!(c==EOF||c=='\n'))
    {
        string[len++] = c;
        c=fgetc(f);
    }
    fclose(f);
    char last = string[len-1];
    f = fopen("output.txt","w");
    for(int i=0; i<len-1; i++)
    {
        if(string[i] == last)
            fprintf(f,"%d ",i);
    }
    fclose(f);
    return 0;
}

