
// Подсчитать количество единичных битов в числе

#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
    uint32_t N;
    int count = 0;
    scanf("%d",&N);
    for(int i=0;i<32;i++)
    {
        count = count + (N&1);
        N >>= 1;
    }

    printf("%d",count);
    return 0;
}

