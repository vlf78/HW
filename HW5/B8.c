// Ровно одна цифра 9

#include <stdio.h>

int main(int argc, char **argv)
{
    int number,count=0;
    scanf("%d",&number);
    while(number != 0)
    {
        if(number%10==9)
            count++;
        number = number/10;
    }
    count==1 ? printf("YES") : printf("NO");
    return 0;
}

