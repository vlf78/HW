// Взять К младших битов от N и вывести полученное число


// похоже в примерах из задания есть ошибка т.к
// 12 и 3 дают 100b = 4, а не 3
// 3 и 5 дают 3 т.к. слева как были нули так и остались


#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
    uint32_t N;
    int K;
    uint32_t maska=1;
    scanf("%d%d",&N,&K);
    for(int i=1; i<K; i++)
        maska = (maska << 1) + 1;
    printf("%x\n",maska);
    printf("%u",N & maska);
    return 0;
}

