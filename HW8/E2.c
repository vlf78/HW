// Найти минимум

#include <stdio.h>

#define SIZE 5

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

int main(int argc, char **argv)
{
    int array[SIZE];
    Input(SIZE,array);
    printf("%d",Min(SIZE,array));
    return 0;
}

