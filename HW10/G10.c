// Самое длинное слово
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE *f;
    char s[1000];
    char max[1000];
    int r=0,max_len=0;
    f = fopen("input.txt","r");
    while((r=fscanf(f,"%s",s))!=EOF)
    {
        if(r>0)
        {
            int len = strlen(s);
            if(len>max_len)
            {
                strcpy(max,s);
                max_len = len;
            }
        }
    }
    fclose(f);

    f = fopen("output.txt","w");
    fprintf(f,"%s",max);
    fclose(f);
    return 0;
}

