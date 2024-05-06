// Составить наибольшее число

#include <stdio.h>

void printDigit(int number)
{
    if(number/10!=0)
    {
        printDigit(number/10);
    }
    printf("%d ",number%10);
}

void SwapArray(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void SortArrayDOWN(int len,int arr[])
{
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

void Print(int n,int arr[])
{
    for(int i=0; i<n; i++)
        printf("%d",arr[i]);
}

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    // тут нужна сортировка
    int temp = number;
    int count = 1;
    while(temp/10!=0)
    {
        temp = temp/10;
        count++;
    }

    int arr[count];
    temp = number;
    for(int i=0;i<count;i++)
    {
        arr[i] = temp%10;
        temp = temp/10;
    }

    SortArrayDOWN(count,arr);
    Print(count,arr);
    return 0;
}

