// сколько раз встречается символ а

#include <stdio.h>

int acounter(void)
{
    char c;
    static int count=0;
    c=getchar();
    if(c=='.')
        return count;
    if(c=='a')
        count++;
    acounter();
}

int main(int argc, char **argv)
{
    printf("%d",acounter());
    return 0;
}


