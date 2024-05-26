// Удалить повторяющиеся символы
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f_in, *f_out;
    char c;
    int simv[128]={0};
    f_in = fopen("input.txt","r");
    f_out = fopen("output.txt","w");
    while((c=fgetc(f_in))!='\n')
    {
        if(c==32)
            continue;
        if(simv[(int)c]==0)
            fprintf(f_out,"%c",c);
        simv[(int)c]++;
    }
    fclose(f_in);
    fclose(f_out);
    return 0;
}

