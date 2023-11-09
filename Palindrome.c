#include<stdio.h>
int main()
{
    int r,n,i,t,rev=0;
    scanf("%d",&n);
    t=n;
    for(i=1;n!=0;i++)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(t==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}