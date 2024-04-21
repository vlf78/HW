// Простое число

#include <stdio.h>
#include <math.h>

int main(int argc, char **argv)
{
    int number,res=1;
    scanf("%d",&number);
    if(number == 1)
        res=0;
    else
    {
        for(int i=2; i<=sqrt(number); i++)
        {
            if(number%i == 0)
            {
                res = 0;
                break;
            }
        }
    }
    res ? printf("YES") : printf("NO");
    return 0;
}

