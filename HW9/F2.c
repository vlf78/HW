
//~ #include <stdio.h>

//~ void sort_even_odd(int n, int a[]);

//~ int main(int argc, char **argv)
//~ {
    //~ int arr[] = {20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    //~ sort_even_odd(20,arr);
    //~ for(int i=0; i<20; i++)
        //~ printf("%d ",arr[i]);
    //~ return 0;
//}

void sort_even_odd(int n, int a[])
{
    int noSwap;
    for(int i=n-1; i>=0; i--)
    {
        noSwap = 1;
        for(int j=0; j<i; j++)
        {
            if(a[j]%2!=0 && a[j+1]%2==0)
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

