// Все цифры в порядке возрастания

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,previous=-1,res=1;
    scanf("%d",&number);
    while(number != 0)
    {
        int digit = number%10;
        if(previous==-1)   // первую цифру не с чем сравнивать
        {
        }
        else if(digit >= previous)
        {
            res = 0;
            break;
        }
        previous = digit;
        number = number/10;
    }
    res==1 ? printf("YES") : printf("NO");
    return 0;
}

