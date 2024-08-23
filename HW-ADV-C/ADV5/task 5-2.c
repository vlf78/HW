// 5-2 Префикс и суфикс

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char s1[104];
    char s2[104];

    scanf("%s",s1);
    scanf("%s",s2);

    int len1 = strlen(s1);
    int len2 = strlen(s2);

    int count1 = 0;
    int count2 = 0;

    // первый суффикс
    int j = len2-len1-1;
    while(j<len2-1)
    {
        count1 = 0;
        for(int i=0; i<len1; i++)
        {
            if (j+i > len2-1)
                break;
            if(s1[i]!=s2[j+i])
            {
                count1 = 0;
                break;
            }
            count1++;
        }
        if(count1)
            break;
        j++;
    }

    // теперь второй суффикс
   j = len1-len2-1;
    while(j<len1-1)
    {
        count2 = 0;
        for(int i=0; i<len2; i++)
        {
            if (j+i > len1-1)
                break;
            if(s2[i]!=s1[j+i])
            {
                count2 = 0;
                break;
            }
            count2++;
        }
        if(count2)
            break;
        j++;
    }


    printf("%d %d",count1,count2);

    return 0;
}

