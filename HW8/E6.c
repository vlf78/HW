// Среднее арифметическое 2

#include <stdio.h>

#define SIZE 12

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
    printf("%.2f",(float)summ/SIZE);
    return 0;
}

