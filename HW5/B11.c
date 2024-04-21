// Перевернуть число

#include <stdio.h>

int main(int argc, char **argv)
{
    int input,output;
    scanf("%d",&input);
    while(input != 0)
    {
        int digit = input%10;
        output = output*10 + digit;
        input = input/10;
    }
    printf("%d",output);
    return 0;
}

