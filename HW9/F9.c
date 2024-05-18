// Поменять местами

//#include <stdio.h>

void swap_negmax_last(int size, int a[])
{
    int max,ind;
    int flag = 0;
    for(int i=0; i<size; i++)
    {
        if(a[i]>=0)
            continue;
        if(flag==0)
        {
            max = a[i];
            ind = i;
            flag = 1;
        } else if(a[i] > max)
        {
            max = a[i];
            ind = i;
        }
    }
    if(flag)
    {
        a[ind] = a[size-1];
        a[size-1] = max;
    }
}

//~ void Print(int n,int arr[])
//~ {
    //~ for(int i=0; i<n; i++)
        //~ printf("%d ",arr[i]);
//~ }


//~ int main(int argc, char **argv)
//~ {
    //~ int a[] = {-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9,10};
    //~ swap_negmax_last(sizeof(a)/sizeof(a[0]),a);
    //~ Print(sizeof(a)/sizeof(a[0]),a);
    //~ return 0;
//}

