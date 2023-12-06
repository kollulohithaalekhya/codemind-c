#include<stdio.h>
int main()
{
int n,r,s,p;
scanf("%d",&n);
s=n%10;
while(n>0)
{
r=n%10;
n=n/10;
}
p=s+r;
printf( "%d ",p);
}