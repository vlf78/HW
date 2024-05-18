// Два одинаковых

// #include <stdio.h>

int is_two_same(int size, int a[])
{
    int c[size];
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(c[j]==a[i])
                return 1;
        }
        c[i] = a[i];
    }
    return 0;
}

//~ int main(int argc, char **argv)
//~ {
    //~ int arr[] = {1,2,3,4,5};
    //~ is_two_same(5,arr) ? printf("YES") : printf("NO");
    //~ return 0;
//}

