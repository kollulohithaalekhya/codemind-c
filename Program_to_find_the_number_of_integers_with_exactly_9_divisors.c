#include<stdio.h>
int main()
{
    int i,n,j;
    scanf("%d",&n);
    int d=0;
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            c+=1;
        }
        if(c==9)
        {
        d+=1;
        printf("%d ",i);
        }
    }
    printf("
Total=%d",d);
}