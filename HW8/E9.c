// Циклический сдвиг вправо

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

void ShiftRightArray(int len,int arr[])
{
    int last = arr[len-1];
    for(int i=len-1; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = last;
}

int main(int argc, char **argv)
{
    int array[SIZE];
    Input(SIZE,array);
    ShiftRightArray(SIZE,array);
    Print(SIZE,array);
    return 0;
}

