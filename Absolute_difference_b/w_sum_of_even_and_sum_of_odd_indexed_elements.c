#include<stdio.h>
int main()
{
    int n,os=0,es=0,i,d;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            es+=a[i];
        }
        else
        {
            os+=a[i];
        }
    }
    if(es>=os)
    {
        d=es-os;
    }
    else
    d=os-es;
    printf("%d",d);
}