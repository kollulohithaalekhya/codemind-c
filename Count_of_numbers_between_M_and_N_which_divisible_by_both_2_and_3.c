#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%2==0 && i%3==0)
        {
            sum=sum+1;
        }
    }
        printf("%d",sum);
}