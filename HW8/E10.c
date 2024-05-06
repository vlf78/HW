// Циклический сдвиг вправо на 4

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
    for(int i=1; i<=4; i++)
        ShiftRightArray(SIZE,array);
    Print(SIZE,array);
    return 0;
}

