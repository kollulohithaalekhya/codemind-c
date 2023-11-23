#include<stdio.h>
int main()
{
    int i,m,n,r;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        r=i*m;
        printf("%d x %d = %d
",m,i,r);
    }
}