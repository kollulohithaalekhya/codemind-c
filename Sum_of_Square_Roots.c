#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float m,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        m=sqrt(i);
        sum=sum+m;
    }
    printf("%.2f",sum);
}