// Сумма элементов

// #include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[])
{
    int rez = 0;
    for(int i=0; i<size; i++)
    {
        if(from<to){
            if(a[i]>=from&&a[i]<=to)
                rez += a[i];
        }
        else
        {
            if(a[i]>=to&&a[i]<=from)
                rez += a[i];
        }
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
    //~ int a[] = {89,71,6,40,61,75,53,64,79,97};
    //~ printf("%d",sum_between_ab(60,50,10,a));
    //~ return 0;
//~ }

