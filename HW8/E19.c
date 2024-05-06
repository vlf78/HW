// Цифры по возрастанию

#include <stdio.h>

void printDigit(int number)
{
    if(number/10!=0)
    {
        printDigit(number/10);
    }
    printf("%d ",number%10);
}

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    printDigit(number);
    return 0;
}

