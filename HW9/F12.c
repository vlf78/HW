// Поменять местами

//#include <stdio.h>

void change_max_min(int size, int a[])
{
    int max=a[0],ind_max=0;
    int min=a[0],ind_min=0;
    for(int i=1; i<size; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
            ind_max = i;
        }
        if(a[i]<min)
        {
            min = a[i];
            ind_min = i;
        }
    }
    int tmp = a[ind_max];
    a[ind_max] = a[ind_min];
    a[ind_min] = tmp;
}

//~ void Print(int n,int arr[])
//~ {
    //~ for(int i=0; i<n; i++)
        //~ printf("%d ",arr[i]);
//~ }


//~ int main(int argc, char **argv)
//~ {
    //~ int a[] = {1,2,3,4,5,6,7,8,9,10};
    //~ change_max_min(sizeof(a)/sizeof(a[0]),a);
    //~ Print(sizeof(a)/sizeof(a[0]),a);
    //~ return 0;
//~ }

