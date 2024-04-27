// Cкобки

#include <stdio.h>

int main(int argc, char **argv)
{
    // будем считать скобки левые и правые
    int left=0, right=0;
    int mistake=0;
    char c;
    while( (c=getchar())!='.')
    {
        if(c=='(')
            left++;
        if(c==')')
            right++;

        if(right > left)
            mistake=1;
    }

    if(right != left)
        mistake=1;
    mistake ? printf("NO") : printf("YES");
    return 0;
}








