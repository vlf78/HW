#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c;

    // printf("Input 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("%d+%d+%d=%d\n",a,b,c,a+b+c);
    printf("%d*%d*%d=%d",a,b,c,a*b*c);
    return 0;
}

