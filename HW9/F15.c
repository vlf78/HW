// Больше модуля

// #include <stdio.h>

int count_bigger_abs(int n, int a[])
{
    int count = 0;
    int max = a[0];
    for (int i=1; i<n; i++)
    {
        if (a[i]>max)
            max = a[i];
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==max)
            continue;
        int abs_value = a[i]<0 ? -a[i] : a[i];
        if(abs_value > max)
            count++;
    }
    return count;
}


//~ int main(int argc, char **argv)
//~ {
    //~ int a[] = {1,-20,3,4,-50,6,7,8,9,10};
    //~ printf("%d",count_bigger_abs(10,a));
    //~ return 0;
//~ }

