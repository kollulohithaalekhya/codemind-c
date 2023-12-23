#include<stdio.h>
int main()
{
    int i,p;
    scanf("%d",&p);
    int a[p];
    for(i=0;i<p;i++)
    {
        scanf("%d",&a[i]);
    }
    int m,n,sum=0;
    scanf("%d%d",&m,&n);
    int s=0;
    for(i=0;i<p;i++)
    { 
        if(a[i]<m || a[i]>n)
        {
            if(a[i]>s)
            {
            s=a[i];
            }
        }
    }
    if(s==0)
    {
    printf("-1");
    }
    else
    printf("%d",s);
}