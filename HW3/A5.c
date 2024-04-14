#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c;

    // printf("Input 3 numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("%.2f",(float)(a+b+c)/3);
    return 0;
}

