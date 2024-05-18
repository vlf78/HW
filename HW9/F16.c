// Черное или белое

#include <stdio.h>

int main(int argc, char **argv)
{
    char letter = getchar();
    int digit = getchar();

    if(digit%2)
    {
        if(letter%2)
            printf("BLACK");
        else
            printf("WHITE");
    }
    else
    {
        if(letter%2)
            printf("WHITE");
        else
            printf("BLACK");
    }

    return 0;
}

