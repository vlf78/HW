// 5-1 Вычеркивание

#include <stdio.h>
#include <string.h>


int main(int argc, char **argv)
{
    char N[100];
    int d1,d2,d3;
    scanf("%s",N);
    int number,numbers[1000],count=0;
    int lenghtN = strlen(N);

    for(int i=0; i< lenghtN-2; i++)
    {
        d1 = N[i]-48;
        for(int j=i+1; j< lenghtN-1; j++)
        {
            d2 = N[j]-48;
            for(int k=j+1; k< lenghtN; k++)
            {
                d3 = N[k]-48;
                number = d1*100 + d2*10 + d3;
                int isAbsent = 1;
                for(int m=0; m<count; m++)
                {
                    if(number == numbers[m])
                    {
                        isAbsent = 0;
                        break;
                    }
                }
                if(isAbsent)
                {
                    numbers[count++] = number;
                    // printf("%d\n",number);
                }
            }
        }

    }

    printf("%d",count);

    return 0;
}

