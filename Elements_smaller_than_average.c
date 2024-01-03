#include<stdio.h>
int main()
{
 int n,i;
 scanf("%d",&n);
 int a[n];
 int avg=0,s=0;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
         avg+=a[i];
     }
     avg=avg/n;
     for(i=0;i<n;i++)
     {
         if(avg>=a[i])
         {
             s+=1;
         }
     }
     printf("%d",s);
     
}