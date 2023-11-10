#include<stdio.h>
int main()
{
    int r,a,n,i,t,rev=0;
     scanf("%d",&n);
     t=n;
     for(i=1;n!=0;i++)
     {
      r=n%10;
      n=n/10;
     rev=rev*10+r;
     }
     if(t==rev)
     {
         printf("True");
     }
     else
     {
         printf("False");
     }
}