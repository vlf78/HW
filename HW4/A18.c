// Above, less, equal

#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b;
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("Above");
    else if (a<b)
        printf("Less");
    else
        printf("Equal");
    return 0;
}

