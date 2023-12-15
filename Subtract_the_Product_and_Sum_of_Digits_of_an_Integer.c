#include<stdio.h>
int main()
{
    int n,i,r,sum=0,fact=1;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        while(n!=0)
        {
            r=n%10;
            sum=sum+r;
            fact=fact*r;
            n=n/10;
        }
    printf("%d",fact-sum);
    }
}