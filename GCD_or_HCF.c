#include<stdio.h>
int main()
{
    int i,n,m,a,b,gcd;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        a=i*n;
        b=a%m;
        if(b==0)
        {
            gcd=(n*m)/a;
            printf("%d",gcd);
            break;
        }
        
    }
}