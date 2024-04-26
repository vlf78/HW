// Cos как сумма ряда

#include <stdio.h>
#include <math.h>

float cosinus(float x);
int factorial(int n);

int main(int argc, char **argv)
{
    float x;
    scanf("%f",&x);
    printf("%.3f",cosinus(x));
    return 0;
}

float cosinus(float x)
{
    // x нужно перевести в радианы
    x = x*3.14/180;

    float res = 1;
    int st = 2;
    int znak = -1;

    while(1)
    {
        float new_value = res + znak*pow(x,st)/factorial(st);
        if(fabs(new_value-res)<= 0.001)
            return res;
        res = new_value;
        znak = -1*znak;
        st += 2;
    }
}

int factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
        fact *= i;
    return fact;
}





