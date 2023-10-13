#include<stdio.h>
int main()
{
    int a;
    float b,c;
    scanf("%d",&a);
    if(a<200)
    {
        b=1.20;
    }
    else if(a>=200 && a<400)
    {
        b=1.50;
    }
    else if(a>=400 && a<600)
    {
        b=1.80;
    }
    else
    {
        b=2.00;
    }
    float d=a*b;
    if( d>400)
    {
        c=d+(d*0.15);
    }
    else
    {
        c=d+100;
    }
    printf("%.2f",c);
}