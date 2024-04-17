// существует ли треугольник


#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c;
    int rez=1; // по умолчанию существует
    scanf("%d%d%d",&a,&b,&c);
    if (a+b<=c) rez=0;
    if (a+c<=b) rez=0;
    if (b+c<=a) rez=0;
    rez ? printf("YES") : printf("NO");
    return 0;
}

