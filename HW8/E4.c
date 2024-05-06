// Два максимума

#include <stdio.h>

#define SIZE 10

void Input(int n,int arr[])
{
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
}

int SumMax(int n, int arr[])
{
    int max1=arr[0],pos1=0;
    int min=arr[0]; // понадобится для инициализации второго максимума

    for(int i=1; i<n; i++) // здесь нулевой пропускаем
    {
        if(arr[i]>max1)
        {
            max1 = arr[i];
            pos1 = i;
        }
        if(arr[i]<min)
            min = arr[i];
    }
    int max2 = min;
    for(int i=0; i<n; i++) // а здесь уже с нулевого
    {
        if(i==pos1)
            continue;
        if(arr[i]>max2)
        {
            max2 = arr[i];
        }
    }
    return max1 + max2;
}



int main(int argc, char **argv)
{
    int array[SIZE];
    Input(SIZE,array);
    printf("%d",SumMax(SIZE,array));
    return 0;
}

