#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int p,f=0;
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        if(p==a[i])
        {
            f=1;
            break;
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}