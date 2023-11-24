#include<stdio.h>
int main()
{
    int n,r,sum=0,fact=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        fact=fact*r;
        n=n/10;
    }
    if(sum==fact)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}