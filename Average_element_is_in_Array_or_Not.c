#include<stdio.h>
int main()
{
int i,n,sum=0,f=0;
int avg;
scanf("%d", &n);
int arr[n];
for (i=0;i<n;i++)
{
scanf("%d",&arr[i]);
sum=sum+arr[i];
}
avg=(int)sum/n;
for(i=0;i<n;i++)
{
if(arr[i]==avg)
{
f=1;
break;
}
}
if(f==1)
printf("True");
else
{
printf("False");
}
}