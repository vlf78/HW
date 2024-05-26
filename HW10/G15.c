// Cao Ling
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f1, *f2;
    char s[1000],c;
    int len=0;
    f1 = fopen("input.txt","r");
    while((c=fgetc(f1))!='\n')
    {
        s[len++] = c;
    }
    fclose(f1);

    f2 = fopen("output.txt","w");
    for(int i=0; i<len; i++)
    {
        if(s[i]=='C'&&s[i+1]=='a'&&s[i+2]=='o')
        {
            fprintf(f2,"%s","Ling");
            i += 2;
        }
        else
            fprintf(f2,"%c",s[i]);
    }
    fclose(f2);
    return 0;
}

