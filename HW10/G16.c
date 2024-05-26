// Ling Cao
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f1, *f2;
    char s[1000];
    signed char c;
    int len=0;
    f1 = fopen("input.txt","r");
    c=fgetc(f1);
    while(c!='\n'&&c!=EOF)
    {
        s[len++] = c;
        c=fgetc(f1);
    }
    fclose(f1);

    f2 = fopen("output.txt","w");
    for(int i=0; i<len; i++)
    {
        if(s[i]=='L'&&s[i+1]=='i'&&s[i+2]=='n'&&s[i+3]=='g')
        {
            fprintf(f2,"%s","Cao");
            i += 3;
        }
        else
            fprintf(f2,"%c",s[i]);
    }
    fclose(f2);
    return 0;
}

