// заканчивается на а
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    FILE *f;
    char s[1000];
    int r=0,count=0;
    f = fopen("input.txt","r");
    while((r=fscanf(f,"%s",s))!=EOF)
    {
        if(r>0)
        {
            int len = strlen(s);
            if(s[len-1]=='a')
            {
                count++;
            }
        }
    }
    fclose(f);

    f = fopen("output.txt","w");
    fprintf(f,"%d",count);
    fclose(f);
    return 0;
}

