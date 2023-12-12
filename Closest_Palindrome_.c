#include<stdio.h>
int main()
{
    int n,np=0,bp=0,i,r,rev,t;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        rev=0;
        t=i;
        r=0;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(i==rev)
        {
            np=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        rev=0;
        t=i;
        r=0;
        while(t!=0)
        {
            r=t%10;
            rev=rev*10+r;
            t=t/10;
        }
        if(rev==i)
        {
            bp=i;
            break;
        }
    }
    if(np-n<n-bp)
    printf("%d",np);
    else if(np-n>n-bp)
    printf("%d",bp);
    else
    printf("%d %d",bp,np);
}