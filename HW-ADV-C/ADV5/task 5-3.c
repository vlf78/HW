// 5-3 Польская запись

#include <stdio.h>
 int main()
 {
     int stack[1000];
     int sp =0;
     while (1) {
         int c = getchar();
         if(c=='.')
            break;
         int x;
         switch (c) {
             case  ' ':
                 break;
             case '=':
                 printf("Result = %d\n", stack[sp - 1]);  sp--;
                 break;
             case '+':
                stack[sp-2] = stack[sp-2] + stack[sp-1];  sp--;
                break;
             case '-':
                stack[sp-2] = stack[sp-2] - stack[sp-1];  sp--;
                break;
             case '*':
                stack[sp-2] = stack[sp-1] * stack[sp-2];  sp--;
                break;
             case '/':
               stack[sp-2] = stack[sp-2] / stack[sp-1];   sp--;
                break;
             default:
                 ungetc (c, stdin); // вернуть символ обратно в поток
                 if (scanf("%d", &x) != 1) {
                     printf("Can't read integer\n");
                     return -1;
                 } else {
                     stack[sp] = x;
                     sp++;
                 }
         }
     }
     printf("%d\n",stack[sp-1]);
     return 0;
 }

