// Сумма максимумов

#include <stdio.h>

int max_in_string(int *a)
{
    int max = *a;
    for(int i=1; i<10; i++)
    {
        if(*(a+i)>max)
            max = *(a+i);
    }
    return max;
}

void Print(int n,int *a)
{
    for(int i=0; i<n; i++)
        printf("%d ",*(a+i));
}


int main(int argc, char **argv)
{
    int a[10][10];
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
            scanf("%d",&a[i][j]);
    }
    // Print(100,(int *)a);
    int max = 0;
    for(int i=0; i<10; i++)
    {
        max += max_in_string((int *) a+i*10);
    }
    printf("%d",max);
    return 0;
}

