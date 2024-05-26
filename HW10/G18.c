// Удалить пробелы
#include <stdio.h>

void delete_spaces(FILE *f,char s[])
{
    int ind = 0;
    char c = fgetc(f);
    //char prev = c;
    int first = 1;
    int repeate = 0;
    while(c!='\n')
    {
        if(c==32)
        {
            if(first!=1&&repeate==0)
            {
                s[ind++] = c;
                repeate = 1;
            }
        }
        else
        {
            first = 0;
            repeate = 0;
            s[ind++] = c;
        }
        c = fgetc(f);
    }
    s[ind] = 0;
}

int main(int argc, char **argv)
{
    FILE *f_in, *f_out;
    char s[1000];

    f_in = fopen("input.txt","r");
    delete_spaces(f_in,s);
    fclose(f_in);

    f_out = fopen("output.txt","w");
    fprintf(f_out,"%s",s);
    fclose(f_out);
    return 0;
}

