// Пары символов
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f_in, *f_out;
    char c,prev=0;
    int space = 0;
    f_in = fopen("input.txt","r");
    f_out = fopen("output.txt","w");
    while((c=fgetc(f_in))!='\n')
    {
        if(c==32)
        {
            if((space==1)&&(prev==0))
            {
                fprintf(f_out," ");
                fprintf(f_out," ");
                space = 0;
            }
            else if(prev==0)
                fprintf(f_out,"%c",c);
            else
                space++;
        }
        else if(prev==0)
        {
            prev = c;
        }
        else
        {
            fprintf(f_out,"%c",c);
            for(int i=1; i<=space; i++)
                fprintf(f_out," ");
            fprintf(f_out,"%c",prev);
            prev = 0;
            space = 0;
        }
    }

    if(space==1)
        fprintf(f_out," ");
    if((prev!=0)&&(prev!=32))
        fprintf(f_out,"%c",prev);


    fclose(f_in);
    fclose(f_out);
    return 0;
}

