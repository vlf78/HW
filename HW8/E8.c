// Инверсия каждой трети

#include <stdio.h>

#define SIZE 12

void Input(int n,int arr[])
{
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
}

void Print(int n,int arr[])
{
    for(int i=0; i<n; i++)
        printf("%d ",arr[i]);
}

void InversArray(int arr[], int n)
{
    for(int i=0,j=n-1; i<j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
     }
}

int main(int argc, char **argv)
{
    int array[SIZE];
    Input(SIZE,array);
    InversArray(array,4);
    InversArray(array+4,4);
    InversArray(array+8,4);
    Print(SIZE,array);
    return 0;
}

