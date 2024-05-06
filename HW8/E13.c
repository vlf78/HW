// Вторая с конца ноль

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

int SelectArray(int len,int arr[],int newArr[])
{
    int j=0;
    for(int i=0; i<len; i++)
    {
        if(arr[i]/10%10==0)
        {
            newArr[j] = arr[i];
            j++;
        }
    }
    return j;
}

int main(int argc, char **argv)
{
    int array[SIZE];
    int array2[SIZE];
    Input(SIZE,array);
    int len = SelectArray(SIZE,array,array2);
    Print(len,array2);
    return 0;
}

