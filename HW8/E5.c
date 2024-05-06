// Сумма положительных элементов

#include <stdio.h>

#define SIZE 10

void Input(int n,int arr[])
{
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
}

int SumPositive(int n, int arr[])
{
    int summ = 0;

    for(int i=0; i<n; i++)
    {
        if(arr[i]>0)
            summ += arr[i];
    }

    return summ;
}

int main(int argc, char **argv)
{
    int array[SIZE];
    Input(SIZE,array);
    printf("%d",SumPositive(SIZE,array));
    return 0;
}

