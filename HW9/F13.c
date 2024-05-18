// Количество элементов

// #include <stdio.h>

int count_between(int from, int to, int size, int a[])
{
    int rez = 0;
    for(int i=0; i<size; i++)
    {
        if(a[i]>=from&&a[i]<=to)
            rez++;
    }
    return rez;
}

//~ void Print(int n,int arr[])
//~ {
    //~ for(int i=0; i<n; i++)
        //~ printf("%d ",arr[i]);
//~ }


//~ int main(int argc, char **argv)
//~ {
    //~ int a[] = {1,2,3,4,5,6,7,8,9,10};
    //~ printf("%d",count_between(4,6,10,a));
    //~ return 0;
//~ }

