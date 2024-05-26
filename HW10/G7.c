// количество букв
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f;
    int lit=0, big=0;
    signed char c;
    f = fopen("input.txt","r");
    c=fgetc(f);
    while(!(c=='\n'||c==EOF))
    {
        if(c>='A'&&c<='Z')
            big++;
        else if(c>='a'&&c<='z')
            lit++;
        c=fgetc(f);
    }
    fclose(f);

    f = fopen("output.txt","w");
    fprintf(f,"%d %d",lit,big);
    fclose(f);
    return 0;
}

