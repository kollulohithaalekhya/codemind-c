#include<stdio.h>
int main()
{
    int n,i,sum=0,c=0;
    float avg;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    avg=(sum)/n;
     for(i=0;i<n;i++)
     {
         if(a[i]>=avg)
         {
             c+=1;
         }
     }
     printf("%d",c);
}