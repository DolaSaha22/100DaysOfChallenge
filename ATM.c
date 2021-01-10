#include<stdio.h>
int main()
{
    int wthdrw;
    float total,rest;
    scanf("%d %f",&wthdrw,&total);

    if(wthdrw%5==0 && (wthdrw+0.50)<=total)
    {
        rest=total-wthdrw-0.50;
        printf("%.2f",rest);
    }
    else
    {
        printf("%.2f",total);
    }

    return 0;
}
