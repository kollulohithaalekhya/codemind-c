#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d%d",&a,&b);
    i=b;
    while(i>=a)
    {
        printf("%d ",i);
        i--;
    }
    
}