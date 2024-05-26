// совпадения букв
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f;
    int a[26]={0},b[26]={0};
    signed char c;
    f = fopen("input.txt","r");
    while((c=fgetc(f))!=' ')
    {
        a[c-'a']++;
    }
    c=fgetc(f);
    while(!(c=='\n'||c==EOF))
    {
        b[c-'a']++;
        c=fgetc(f);
    }
    fclose(f);

    f = fopen("output.txt","w");
    for(int i=0; i<26; i++)
    {
        if(a[i]==1 && b[i]==1)
            fprintf(f,"%c ",i+'a');
    }
    fclose(f);
    return 0;
}

