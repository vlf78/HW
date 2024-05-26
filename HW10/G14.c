// Привет Имя Отчество
#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *f1, *f2;
    char name[100],surname[100];
    f1 = fopen("input.txt","r");
    fscanf(f1,"%s",surname);
    // printf("%s\n",surname);
    fscanf(f1,"%s",name);
    // printf("%s\n",name);
    fclose(f1);

    f2 = fopen("output.txt","w");
    fprintf(f2,"%s","Hello, ");
    fprintf(f2,"%s ",name);
    fprintf(f2,"%s!",surname);
    fclose(f2);
    return 0;
}

