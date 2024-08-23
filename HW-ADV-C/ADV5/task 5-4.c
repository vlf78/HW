// 5-4 двоичные нули

#include <stdio.h>
#include <inttypes.h>

// что-то мне подсказывает что эту задачку можно решить битовым полем

union {
    uint16_t value;
    struct
    {
        uint16_t b1 : 1;
        uint16_t b2 : 1;
        uint16_t b3 : 1;
        uint16_t b4 : 1;
        uint16_t b5 : 1;
        uint16_t b6 : 1;
        uint16_t b7 : 1;
        uint16_t b8 : 1;
        uint16_t b9 : 1;
        uint16_t b10 : 1;
        uint16_t b11 : 1;
        uint16_t b12 : 1;
        uint16_t b13 : 1;
        uint16_t b14 : 1;
        uint16_t b15 : 1;
        uint16_t b16 : 1;
    } bit;
} number;

int main(int argc, char **argv)
{
    int N,K,count=0;

    scanf("%d%d",&N,&K);

    for(int i=1; i<=N; i++)
    {
        number.value = i;
        // складываем все нули со старшего, но при наличии единицы
        int flag=0;
        int sum = 0;
        if(flag)
            sum += number.bit.b16 ? 0 : 1;
        flag += number.bit.b16;
        if(flag)
            sum += number.bit.b15 ? 0 : 1;
        flag += number.bit.b15;
        if(flag)
            sum += number.bit.b14 ? 0 : 1;
        flag += number.bit.b14;
        if(flag)
            sum += number.bit.b13 ? 0 : 1;
        flag += number.bit.b13;
        if(flag)
            sum += number.bit.b12 ? 0 : 1;
        flag += number.bit.b12;
        if(flag)
            sum += number.bit.b11 ? 0 : 1;
        flag += number.bit.b11;
        if(flag)
            sum += number.bit.b10 ? 0 : 1;
        flag += number.bit.b10;
        if(flag)
            sum += number.bit.b9 ? 0 : 1;
        flag += number.bit.b9;
        if(flag)
            sum += number.bit.b8 ? 0 : 1;
        flag += number.bit.b8;
        if(flag)
            sum += number.bit.b7 ? 0 : 1;
        flag += number.bit.b7;
        if(flag)
            sum += number.bit.b6 ? 0 : 1;
        flag += number.bit.b6;
        if(flag)
            sum += number.bit.b5 ? 0 : 1;
        flag += number.bit.b5;
        if(flag)
            sum += number.bit.b4 ? 0 : 1;
        flag += number.bit.b4;
        if(flag)
            sum += number.bit.b3 ? 0 : 1;
        flag += number.bit.b3;
        if(flag)
            sum += number.bit.b2 ? 0 : 1;
        flag += number.bit.b2;
        if(flag)
            sum += number.bit.b1 ? 0 : 1;
        flag += number.bit.b1;

        if(sum==K)
            count++;

    }

    printf("%d",count);

    return 0;
}

