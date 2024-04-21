// Ровно три цифры

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,count=0;
    scanf("%d",&number);
    while(number != 0)
    {
        count++;
        number = number/10;
    }
    count == 3 ? printf("YES") : printf("NO");
    return 0;
}

