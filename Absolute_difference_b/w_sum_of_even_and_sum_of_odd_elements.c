#include<stdio.h>
int main()
{
    int n,i,sum=0,tum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        sum=sum+arr[i];
        else
        tum=tum+arr[i];
    }
    if(sum>=tum)
    {
        printf("%d",sum-tum);
    }
    else
    {
        printf("%d",tum-sum);
    }
}