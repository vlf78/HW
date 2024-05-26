// Строка и цифры
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f;
    int number;
    f = fopen("input.txt","r");
    fscanf(f,"%d",&number);
    fclose(f);
    // запись
    f = fopen("output.txt","w");
    int digit = 2;
    for(int i=1; i<=number; i++)
    {
        if(i%2==0)
        {
            fprintf(f,"%d",digit);
            digit += 2;
            if(digit==10)
                digit=2;
        }
        else
            fprintf(f,"%c",'@'+(i+1)/2);
    }
    fclose(f);
    return 0;
}

