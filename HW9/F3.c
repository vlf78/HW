// цифры по возрастанию

#include <stdio.h>

void print_digits(char number[])
{
    int arr[10] = {0};
    for(int i=0; number[i]; i++)
    {
        arr[number[i]-48]++;
    }

    for(int i=0; i<10; i++)
    {
        if(arr[i]>0)
            printf("%d %d\n",i,arr[i]);
    }
}

int main(int argc, char **argv)
{
    // тут короче не про цифры а про строки
    char number[1001];
    scanf("%s",number);
    print_digits(number);
    return 0;
}



