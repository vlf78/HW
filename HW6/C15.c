// Цифры по возрастанию

#include <stdio.h>

int grow_up(int n);

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    grow_up(number) ? printf("YES") : printf("NO");
    return 0;
}

int grow_up(int n)
{
    int previous=-1,res=1;

    while(n != 0)
    {
        int digit = n%10;
        if(previous==-1)
        {
        }
        else if(digit >= previous)
        {
            res = 0;
            break;
        }
        previous = digit;
        n = n/10;
    }
    return res;
}






