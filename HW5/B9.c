// Все цифры четные

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,res=1;
    scanf("%d",&number);
    while(number != 0)
    {
        if(number%2!=0)
        {
            res = 0;
            break;
        }
        number = number/10;
    }
    res==1 ? printf("YES") : printf("NO");
    return 0;
}

