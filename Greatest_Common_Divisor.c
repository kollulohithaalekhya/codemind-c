#include<stdio.h>
int main()
{
    int a,b,i,s,gcd,m;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        m=i*a;
        s=m%b;
        if(s==0)
        {
        gcd=(a*b)/m;
        printf("%d",gcd);
        break;
        }
    }
    
}