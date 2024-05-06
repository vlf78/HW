// Инверсия половин

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
    InversArray(array,5);
    InversArray(array+5,5);
    Print(SIZE,array);
    return 0;
}

