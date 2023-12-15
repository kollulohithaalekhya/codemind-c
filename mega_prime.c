#include<stdio.h>
int main()
{
    int i,t,n,c=0,r,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    { 
        if(n%i==0)
        {
        c=c+1;
        }
    }
    if(c==2)
    {
        t=i;
    }
    while(t!=0)
    {
        r=t%10;
        if(r==2 || r==3 || r==5 || r==7)
        {
            f=1;
        }
        t=t/10;
    }
    if(f==1)
    printf("Mega Prime");
    else
    printf("Not Mega Prime");
}