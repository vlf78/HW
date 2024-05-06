// Кратность от 2 до 99

#include <stdio.h>

void Print(int n,int arr[])
{
    for(int i=0; i<n; i++)
        printf("%d %d\n",i+2,arr[i]);
}

int main(int argc, char **argv)
{
    int number;
    int array[8] = {0};
    scanf("%d",&number);
    for(int n=2; n<=number; n++)
    {
        for(int j=2; j<=9; j++)
        {
            if(n%j==0)
                array[j-2]++;
        }
    }
    Print(8,array);
    return 0;
}

