#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,s,t,u;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    e=a*b;
    s=b+(c+c);
    g=a+(c+c);
    f=s*g;
    if(e>=f)
    {
    t=(e-f)*d;
    printf("%d",t);
    }
    else
    {
    u=(f-e)*d; 
    printf("%d",u);
    }
    
}