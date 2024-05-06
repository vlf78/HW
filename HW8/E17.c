// Только один раз

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

int main(int argc, char **argv)
{
    int array[SIZE];
    int array2[SIZE];
    int len2 = 0;
    Input(SIZE,array);
    for(int i=0; i<SIZE; i++)
    {
        int count=0;
        for(int j=0; j<SIZE; j++)
        {
            if(array[i]==array[j])
                count++;
        }
        if(count==1)
            array2[len2++] = array[i];
    }
    Print(len2,array2);
    return 0;
}

