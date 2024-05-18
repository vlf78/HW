
// #include <stdio.h>

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

//~ int main(int argc, char **argv)
//~ {
    //~ int arr[] = {5,4,3,2,1};
    //~ sort_array(5,arr);
    //~ for(int i=0; i<5; i++)
        //~ printf("%d ",arr[i]);
    //~ return 0;
//}

