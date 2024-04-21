// Квадраты и кубы

#include <stdio.h>

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    for(int i=1; i<=number; i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}

