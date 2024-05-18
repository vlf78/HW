// След матрицы

#include <stdio.h>

int sled(int n, int *a)
{
    int res = 0;
    for(int i=0; i<n; i++)
        res += *(a+i*n+i);
    return res;
}

int main(int argc, char **argv)
{
    int a[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            scanf("%d",&a[i][j]);
    }
    printf("%d",sled(5,(int *)a));
    return 0;
}

