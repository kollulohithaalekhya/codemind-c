#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d%d",&a,&b);
    c=500-a*2;
    d=1000-(a+b)*4;
    e=1000-(b)*4;
    f=500-(a+b)*2;
    if(c+d>=e+f)
    printf("%d",c+d);
    else
    printf("%d",e+f);
    
}