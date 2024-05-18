// Сумма минимальна

#include <stdio.h>

int main(int argc, char **argv)
{
    // по сути нужно найти два минимальных элемента
    // только вот похоже они могут быть одинаковые
    int a[30]; // = {-10,25,-20,25,-11,-32,-5,3,3,-34,-12,36,37,2,8,49,30,30,-12,14,-40,-24,40,-27,3,49,13,44,-33,2};

    for(int i=0; i<30; i++)
    {
        scanf("%d",&a[i]);
    }

    int ind1=0,n1=a[0];
    for(int i=1;i<30;i++)
    {
        if(a[i]<n1)
        {
            n1 = a[i];
            ind1 = i;
        }
    }

    int ind2 = ind1==0 ? 1 : 0;
    int n2=a[ind2];
    for(int i=1;i<30;i++)
    {
        if(a[i]<n2&&i!=ind1)
        {
            n2 = a[i];
            ind2 = i;
        }
    }

    ind1 < ind2 ? printf("%d %d",ind1,ind2) : printf("%d %d",ind2,ind1);
    return 0;
}

