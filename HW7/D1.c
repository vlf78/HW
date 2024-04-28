// Печать чисел от 1 до N

#include <stdio.h>

void print(int n)
{
    if(n>1)
        print(n-1);
    printf("%d ",n);
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}








