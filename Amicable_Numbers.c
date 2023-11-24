#include<stdio.h>
int main()
{
    int x,y,i,j,sum=0,tsum=0;
    scanf("%d %d",&x,&y);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        sum=sum+i;
    }
    for(j=1;j<y;j++)
    {
        if(y%j==0)
        tsum=tsum+j;
    }
    if(x==tsum && y==sum)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}