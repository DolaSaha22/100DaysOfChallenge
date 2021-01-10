#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int num,r,num2=0;
        scanf("%d",&num);
        int temp=num;
        while(num!=0){
            r = num % 10;
            num2 = (num2*10) + r;
            num = num/10;
        }
        if(num2==temp)
            printf("wins\n");
        else
            printf("loses\n");
    }
    return 0;
}
