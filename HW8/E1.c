// Среднее арифметическое

#include <stdio.h>

#define SIZE 5

void Input(int n,int arr[])
{
    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);
}

int main(int argc, char **argv)
{
    int array[SIZE];
    Input(SIZE,array);
    int summ=0;
    for(int i=0; i<SIZE; i++)
        summ += array[i];
    printf("%.3f",(float)summ/SIZE);
    return 0;
}

