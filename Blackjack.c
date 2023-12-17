#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    if((a+b)<=21)
    {
        d=a+b;
        c=21-d;
        if(c>=1 && c<=10)
       printf("%d",c);
        else
        printf("-1");
    }
}