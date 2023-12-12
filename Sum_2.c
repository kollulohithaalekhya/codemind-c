#include<stdio.h>
int main()
{
    int a,b,n,m,sum=0,i;
    scanf("%d%d%d%d",&a,&b,&n,&m);
    for(i=a;i<=b;i++)
    {
        if(i%n==0 && i%m!=0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}