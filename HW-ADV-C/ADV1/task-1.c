
// Сколько раз встречается максимум

#include <stdio.h>

int main(int argc, char **argv)
{
    int N;
    int count = 1;
    int number, max;
    scanf("%d",&N);
    scanf("%d",&max);
    for(int i=1; i<N; i++)
    {
        scanf("%d",&number);
        if(number > max)
        {
            max = number;
            count = 1;
        }
        else if (number == max)
                count++;
    }
    printf("%d",count);
    return 0;
}

