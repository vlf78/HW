// Максимум в массиве

// #include <stdio.h>

int find_max_array(int size, int a[])
{
    int max = a[0];
    for(int i=1; i<size; i++)
    {
        max = a[i]>max? a[i] : max;
    }
    return max;
}

//~ int main(int argc, char **argv)
//~ {
    //~ int arr[] = {773,307,371,548,531,765,402,27,573,591,217,859,662,493,173};
    //~ printf("%d",find_max_array(sizeof(arr)/sizeof(arr[0]),arr));
    //~ return 0;
//}

