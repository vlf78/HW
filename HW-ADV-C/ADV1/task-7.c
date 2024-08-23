
// Инверсия старших

#include <stdio.h>
#include <inttypes.h>

union number{
    uint32_t value;
    struct
    {
        uint32_t b1 : 8;
        uint32_t b2 : 8;
        uint32_t b3 : 8;
        uint32_t b4 : 8;
    } bit;
} N;

int main(int argc, char **argv)
{
    scanf("%u",&N.value);
    N.bit.b4 = ~N.bit.b4;
    printf("%u",N.value);
    return 0;
}

