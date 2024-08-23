
// Циклический сдвиг вправо

#include <stdio.h>
#include <inttypes.h>

int main(int argc, char **argv)
{
    uint32_t N;
    int K;
    scanf("%d%d",&N,&K);
    uint32_t res = (N >> K)|(N << (32-K));
    printf("%u",res);
    return 0;
}

