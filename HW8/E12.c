// По возрастанию и убыванию

#include <stdio.h>

#define SIZE 10

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

void SwapArray(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void SortArrayUP(int len,int arr[])
{
    // сортируем пузырьком
    int noSwap;
    for(int i=len-1; i>=0; i--)
    {
        noSwap = 1;
        for(int j=0; j<i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                SwapArray(arr,j,j+1);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

void SortArrayDOWN(int len,int arr[])
{
    // сортируем пузырьком
    int noSwap;
    for(int i=len-1; i>=0; i--)
    {
        noSwap = 1;
        for(int j=0; j<i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                SwapArray(arr,j,j+1);
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

int main(int argc, char **argv)
{
    int array[SIZE];
    Input(SIZE,array);
    SortArrayUP(SIZE/2,array);
    SortArrayDOWN(SIZE/2,array+SIZE/2);
    Print(SIZE,array);
    return 0;
}

