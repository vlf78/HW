// Четные и нечетные

#include <stdio.h>

void Print(int n,int *a)
{
    for(int i=0; i<n; i++)
        printf("%d ",*(a+i));
}

int convert(int number, int chet)
{
    int res = 1;
    while(number>0)
    {
        int digit = number%10;
        if((chet&&digit%2==0)||(!chet&&digit%2!=0))
            res *= digit;
        number = number/10;
    }
    return res;
}

int main(int argc, char **argv)
{
    int a[10];
    int chet = 0;
    int nechet = 0;
    for(int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2)
            nechet++;
        else
            chet++;
    }

    for(int i=0; i<10; i++)
    {
        if(chet>nechet&&a[i]%2!=0)
            a[i] = convert(a[i],0);
        else if(chet<=nechet&&a[i]%2==0)
            a[i] = convert(a[i],1);
    }

    Print(10,(int*)a);
    return 0;
}

