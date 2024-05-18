// Упаковать массив 0 1

//#include <stdio.h>

int compression(int a[], int b[], int N)
{
    int ind_b = 0;
    if (a[0]==1)
        b[ind_b++] = 0;
    int count = 1;
    int prev = a[0];
    for(int i=1; i<N; i++)
    {
        if(prev!=a[i])
        {
            b[ind_b++] = count;
            prev = a[i];
            count=1;
        } else
        count++;
    }
    b[ind_b++] = count; // последний элемент
    return ind_b;
}

//~ void Print(int n,int arr[])
//~ {
    //~ for(int i=0; i<n; i++)
        //~ printf("%d ",arr[i]);
//~ }


//~ int main(int argc, char **argv)
//~ {
    //~ int a[] = {1,1,1,0,0,0,0,0,0,0};
    //~ int b[100];
    //~ int n = compression(a,b,sizeof(a)/sizeof(a[0]));
    //~ Print(n,b);
    //~ return 0;
//}

