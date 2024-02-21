#include<stdio.h>
int main()
{
    int i,n,b;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            b=i;
        }
    }
    printf("%d",b);
}