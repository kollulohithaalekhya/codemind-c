#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float c=((b-a)*100.0)/a;
    printf("%.2f",c);
}