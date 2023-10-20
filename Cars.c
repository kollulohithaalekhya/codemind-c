#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=n/4;
    if(n%4==0)
    {
        printf("%d",c);
    }
    else
    {
        printf("%d",c+1);
    }
}