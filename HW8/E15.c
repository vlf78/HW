// Разложить по двум

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


int selectPositive(int in[], int out[], int len)
{
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(in[i]>0)
            out[count++]=in[i];
    }
    return count;
}

int selectNegative(int in[], int out[], int len)
{
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(in[i]<0)
            out[count++]=in[i];
    }
    return count;
}

int main(int argc, char **argv)
{
    int array[SIZE];
    int array2[SIZE];
    int array3[SIZE];
    Input(SIZE,array);
    int len2 = selectPositive(array,array2,SIZE);
    int len3 = selectNegative(array,array3,SIZE);
    Print(len2,array2);
    Print(len3,array3);
    return 0;
}

