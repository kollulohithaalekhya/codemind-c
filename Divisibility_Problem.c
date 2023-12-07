#include<stdio.h>
int main()
{
    int i,j,a,b,c,d=0;
    scanf("%d%d",&a,&b);
    c=a+1;
    if(a%b==0)
    {
        printf("%d",d);
    }
    else
    {
    for(i=c;;i++)
    {
        d=d+1;
        if(i%b == 0)
        {
            break;
        }
    }
    printf("%d",d);
    }
}