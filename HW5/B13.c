// Количество четных и нечетных цифр

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,chet=0,nechet=0;
    scanf("%d",&number);
    while(number != 0)
    {
        int digit = number%10;
        digit%2 == 0 ? chet++ : nechet++;
        number /= 10;
    }
    printf("%d %d",chet,nechet);
    return 0;
}

