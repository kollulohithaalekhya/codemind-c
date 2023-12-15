#include<stdio.h>
int main()
{
    int i,j,n,a,b,m,f=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c=0;
        scanf("%d%d",&a,&b);
        for(j=a;j<=b;j++)
        {
            m=j%10;
            if(m==2  || m==3 ||  m==9)
            {
                c=c+1;
                f=1;
            }
        }
        if(f==1)
        printf("%d
",c);
    }
}