// В порядке возрастания

#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c;
    int rez=1;
    scanf("%d%d%d",&a,&b,&c);
    if (a >= b) rez=0;
    if (b >= c) rez=0;
    rez==1 ? printf("YES") : printf("NO");
    return 0;
}

