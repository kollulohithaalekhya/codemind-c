#include<stdio.h>
int main()
{
    int i,n,m,s,r;
    scanf("%d%d%d",&n,&m,&s);
    for(i=m;i<=s;i++)
    {
        r=n*i;
        printf("%d x %d = %d
",n,i,r);
        
    }
}