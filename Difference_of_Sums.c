#include<stdio.h>
int main()
{
    int i,j,n,m=0,p=0,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        m=m+i*i;
    }
    for(j=1;j<=n;j++)
    {
        p=p+j;
    }
    s=p*p;
    if(s>m)
    printf("%d",s-m);
    else
    printf("%d",m-s);
}