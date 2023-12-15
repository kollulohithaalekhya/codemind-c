#include<stdio.h>
int main()
{
    int n,i,sum=0,t;
    scanf("%d",&n);
    t=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(t==sum)
    printf("PERFECT");
    else if(t<sum)
    printf("ABUNDANT");
    else
    printf("DEFICIENT");
}