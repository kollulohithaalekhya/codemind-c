#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     int m,p=0;
    scanf("%d",&m);
     for(i=0;i<n;i++)
   {
        if(a[i]==m)
        {
           p+=1;
        }
    }
    printf("%d",p);
}