#include<stdio.h>
int main()
{
    int i,n,arr[n],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==1)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}
