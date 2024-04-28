// Перевод в двочиную систему

#include <stdio.h>

void dec_to_bin(int num)
{
    if(num >= 2)
        dec_to_bin(num/2);
    printf("%d",num%2);
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    dec_to_bin(n);
    return 0;
}








