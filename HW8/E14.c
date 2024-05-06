// Более одного раза

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


int selection(int in[], int out[], int len)
{
    int count = 0;
    int flag = 1;
    for(int i = 0; i < len; i++)
        for(int j = i + 1; j < len; j++)
            if(in[i] == in[j])
            {
                for(int k = 0; k < count; k++)
                {
                    if(out[k] == in[i])
                    {
                        flag = 0;
                        break;
                    }
                    else
                        flag = 1;
                }
                if(flag == 1)
                    out[count++] = in[i];
            }

    return count;
}



int main(int argc, char **argv)
{
    int array[SIZE];
    int array2[SIZE];
    Input(SIZE,array);
    int len = selection(array,array2,SIZE);
    Print(len,array2);
    return 0;
}

