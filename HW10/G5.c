// заменить a на b
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *fin, *fout;
    signed char c;
    fin = fopen("input.txt","r");
    fout = fopen("output.txt","w");
    c=fgetc(fin);
    while(!(c=='\n'||c==EOF))
    {
        if(c=='a'||c=='A')
            fprintf(fout,"%c",c+1);
        else if(c=='b'||c=='B')
            fprintf(fout,"%c",c-1);
        else
            fprintf(fout,"%c",c);
        c=fgetc(fin);
    }
    fclose(fin);
    fclose(fout);
    return 0;
}

