// Цифры по возрастанию

#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(int argc, char **argv)
{
    int number;
    scanf("%d",&number);
    is_prime(number) ? printf("YES") : printf("NO");
    return 0;
}

int is_prime(int n)
{
    int res=1;
    if(n <= 1)
        res=0;
    else
    {
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i == 0)
            {
                res = 0;
                break;
            }
        }
    }
    return res;
}






