// Уравнение кривой по координатам двух точек

#include <stdio.h>

int main(int argc, char **argv)
{
    int x1,x2,y1,y2;
    float k,b;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    /* как будем решать: тут получается система уравнений, при любом раскладе b остается неизменным,
     * поэтому выразим b в обих уравнениях и приравняем, получится: y1-kx1 = y2-kx2
     * из этого уравнения можно вычислить k = (y1-y2)/(x1-x2)
     * ну а дальше b вычисли например из первого b = y1 - kx1
    */
    k = (float)(y1-y2)/(x1-x2);
    b = y1 - k*x1;
    printf("%.2f %.2f",k,b);
    return 0;
}
