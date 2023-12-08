#include<stdio.h>
int main()
{
    int m,n,i=0;
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        if(i<m)
        {
            i=m;
        }
        n=n/10;
        
    }
    printf("%d",i);
}