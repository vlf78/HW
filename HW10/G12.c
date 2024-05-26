// разобрать на слова
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f1, *f2;
    char s[1000];
    int r=0;
    f1 = fopen("input.txt","r");
    f2 = fopen("output.txt","w");
    while((r=fscanf(f1,"%s",s))!=EOF)
    {
        if(r>0)
        {
            fprintf(f2,"%s\n",s);
        }
    }
    fclose(f1);
    fclose(f2);
    return 0;
}

