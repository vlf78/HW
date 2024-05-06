// Максимум и минимум и их номера

#include <stdio.h>

#define SIZE 10

void Input(int n,int arr[])
{
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
}

int Min(int n, int arr[])
{
    int min=arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]<min)
            min = arr[i];
    return min;
}

int PosMin(int n, int arr[])
{
    int min=arr[0],pos=0;
    for(int i=1; i<n; i++)
        if(arr[i]<min)
        {
            min = arr[i];
            pos = i;
        }
    return pos;
}

int Max(int n, int arr[])
{
    int max=arr[0];
    for(int i=1; i<n; i++)
        if(arr[i]>max)
            max = arr[i];
    return max;
}

int PosMax(int n, int arr[])
{
    int max=arr[0],pos=0;
    for(int i=1; i<n; i++)
        if(arr[i]>max)
        {
            max = arr[i];
            pos = i;
        }
    return pos;
}

int main(int argc, char **argv)
{
    int array[SIZE];
    Input(SIZE,array);
    printf("%d ",PosMax(SIZE,array)+1);
    printf("%d ",Max(SIZE,array));
    printf("%d ",PosMin(SIZE,array)+1);
    printf("%d ",Min(SIZE,array));
    return 0;
}

