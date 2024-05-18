// Найти пропущенное число

#include <stdio.h>

int main(int argc, char **argv)
{
    int arr[1001] = {0};
    int res=0;
    int min = 1000;
    int number;
    scanf("%d",&number);
    while(number != 0)
    {
        arr[number] = number;
        if(number<min)
            min = number;
        scanf("%d",&number);
    }
    for(int i=min; i<=1000; i++)
    {
        if(arr[i]==0)
        {
            res = i;
            break;
        }
    }
    printf("\n%d",res);
    return 0;
}

