#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);
    int arr[n];
    float avg=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    avg=(float)sum/n;
    printf("%.2f",avg);
}