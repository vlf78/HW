// числа в массив
#include <stdio.h>
#include <stdlib.h>

void sort_array(int size, int a[])
{
    int noSwap;
    for(int i=size-1; i>=0; i--)
    {
        noSwap = 1;
        for(int j=0; j<i; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                noSwap = 0;
            }
        }
        if(noSwap)
            break;
    }
}

int main(int argc, char **argv)
{
    FILE *f;
    char s[1000];
    int r=0;
    int arr[1000] = {0};
    int len=0;
    f = fopen("input.txt","r");
    while(r!=EOF)
    {
        r=fscanf(f,"%[^0-9]",s);
        r=fscanf(f,"%[0-9]",s);
        if(r>0)
        {
            arr[len++] = atoi(s);
        }
    }
    fclose(f);
    sort_array(len,arr);
    f = fopen("output.txt","w");
    for(int i=0; i<len; i++)
    {
        fprintf(f,"%d ",arr[i]);
    }
    fclose(f);
    return 0;
}

