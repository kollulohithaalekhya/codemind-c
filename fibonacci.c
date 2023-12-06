#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,n;
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for(i=b;i<n-1;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}