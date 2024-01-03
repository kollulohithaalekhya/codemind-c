#include<stdio.h>
int main()
{
    int n,p=0;
    scanf("%d",&n);
    int i,j,c=0;
    for(i=1;i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c+=1;
                }
            }
            if(c!=2)
            {
                p+=1;
            }
        }
    }
    printf("%d",p);
}