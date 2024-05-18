// цифры в строке

//#include <stdio.h>

void print_digit(char s[])
{
    // заполняем массив цифр
    int digit[10] = {0};
    char *ptr = s;
    while(*ptr)
    {
        if(*ptr<48||*ptr>57)
        {
            ptr++;
            continue;
        }
        digit[*ptr-48]++;
        ptr++;
    }

    // вывод
    for(int i=0; i<10; i++)
    {
        if(digit[i]>0)
            printf("%d %d\n",i,digit[i]);
    }

}

//~ int main(int argc, char **argv)
//~ {
    //~ char s[] = "Hello123 world77";
    //~ print_digit(s);
    //~ return 0;
//}



