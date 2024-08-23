
// Шифр Цезаря

#include <stdio.h>

int main(int argc, char **argv)
{
    int N;
    char c;
    char p;
    scanf("%d",&N);
    c=getchar(); // первый пробел пропускаем
    while((c=getchar())!='.')
    {
        if(c==32)
            printf("%c",c);
        else
        {
            if(c<91)
                p = (c + N - 64)%26 + 64;
            else
                p = (c + N - 96)%26 + 96;
            printf("%c",p);
        }
    }

    printf("%c",c);
    return 0;
}

