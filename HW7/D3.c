// В обратном порядке

#include <stdio.h>

void print(int n)
{
    printf("%d ",n%10);
    if(n>=10)
        print(n/10);
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}








