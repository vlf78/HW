// Чаще всего

#include <stdio.h>

#define SIZE 10

void Input(int n,int arr[])
{
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
}

int main(int argc, char **argv)
{
    int array[SIZE];
    int max = 0, maxInd = 0;
    Input(SIZE,array);
    for(int i=0; i<SIZE; i++)
    {
        int count=0;
        for(int j=0; j<SIZE; j++)
        {
            if(array[i]==array[j])
                count++;
        }
        if(count>max)
        {
            max=count;
            maxInd = i;
        }
    }
    printf("%d",array[maxInd]);
    return 0;
}

