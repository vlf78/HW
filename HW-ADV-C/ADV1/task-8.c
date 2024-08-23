
// Не пара

#include <stdio.h>
#include <inttypes.h>



int main(int argc, char **argv)
{
    uint64_t N,number,res=0;
    scanf("%" SCNu64,&N);
    for (int i=0; i < N; i++)
    {
        scanf("%" SCNu64,&number);
        res ^= number;
    }

    printf("%" PRIu64,res);
    return 0;
}

