// Больше среднего

#include <stdio.h>

int average(int n,int *a)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += *(a + i*n + i);
    }
    return sum/n;
}

int main(int argc, char **argv)
{
    int a[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            scanf("%d",&a[i][j]);
    }
    int av = average(5,(int*)a);
    int count = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            if(a[i][j] > av)
                count++;
    }
    printf("%d",count);
    return 0;
}

