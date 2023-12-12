#include<stdio.h>
int  main()
{
    int n,a,t,j,i,fact=1,r,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);
        t=a;
        fact=1;
        sum=0;
        while(t!=0)
        {
            fact=1;
            r=t%10;
            for(j=1;j<=r;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            t=t/10;
        }
        if(a==sum)
        printf("Strong
");
        else
        printf("Not Strong
");
    }
}