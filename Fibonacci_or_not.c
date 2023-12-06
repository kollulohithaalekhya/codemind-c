#include<stdio.h>
int main()
{
    int i,a=0,b=1,c,n,flag=0;
    scanf("%d",&n);
    for(i=b;i<n-1;i++)
    {
        c=a+b;
        if(c==n)
        {
            flag=1;
            break;
        }
        a=b;
        b=c;
    }
    if(flag==1)
    printf("True");
    else
    printf("False");
}