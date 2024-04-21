// Две одинаковые цифры НЕ рядом

#include <stdio.h>

int main(int argc, char **argv)
{
    // тут напрашивается счетчик для каждой цифры
    // либо массив. но мы массивы вроде на знаем, наверное счетчик
    int number;
    int c0=0,c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0;
    scanf("%d",&number);
    while(number != 0)
    {
        switch(number%10)
        {
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
            case 3:
                c3++;
                break;
            case 4:
                c4++;
                break;
            case 5:
                c5++;
                break;
            case 6:
                c6++;
                break;
            case 7:
                c7++;
                break;
            case 8:
                c8++;
                break;
            case 9:
                c9++;
        }
        number = number/10;
    }
    if(c0>1||c1>1||c2>1||c3>1||c4>1||c5>1||c6>1||c7>1||c8>1||c9>1)
        printf("YES");
    else
        printf("NO");
    return 0;
}

