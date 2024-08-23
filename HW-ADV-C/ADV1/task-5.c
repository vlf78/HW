// Максимальное число из К битов

#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
    uint32_t N;
    uint32_t K;
    scanf("%d%d",&N,&K);
    uint32_t maska = 1;
    for(int i=1;i<K;i++)
        maska = (maska<<1) + 1;
    uint32_t max = 0;
    for(int i=0; i<32-K; i++)
    {
        int number = N & maska;
        max = number > max ? number : max;
        N >>= 1;
    }

    // printf("%x\n",maska);
    printf("%d",max);
    return 0;
}

