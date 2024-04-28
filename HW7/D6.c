// Строка наоборот

#include <stdio.h>

void reverse_string()
{
    char c;
    if((c=getchar())=='.')
        return;
    reverse_string();
    putchar(c);
}

int main(int argc, char **argv)
{
    reverse_string();
    return 0;
}








