// Время года

#include <stdio.h>

int main(int argc, char **argv)
{
    int month;
    int season;
    scanf("%d",&month);
    if (month<=2||month==12)
        season = 1;
    else if (month<=5)
        season = 2;
    else if (month<=8)
        season = 3;
    else
        season = 4;

    // дальше в задании написано использовать switch, попробуем
    switch (season)
    {
    case 1:
        printf("winter");
        break;
    case 2:
        printf("spring");
        break;
    case 3:
        printf("summer");
        break;
    case 4:
        printf("autumn");
    }
    return 0;
}

