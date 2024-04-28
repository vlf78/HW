// Количество двоичных 1

#include <stdio.h>

int dec_to_bin(int num)
{
    int sum = 0;
    if(num >= 2)
        sum += dec_to_bin(num/2);
    sum += num%2;
    return sum;
}

int main(int argc, char **argv)
{
    int n;
    scanf("%d",&n);
    printf("%d",dec_to_bin(n));
    return 0;
}








