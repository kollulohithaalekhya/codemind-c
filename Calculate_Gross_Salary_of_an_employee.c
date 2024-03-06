#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float s=0.12*a;
    printf("%.2f
",s);
    float g=a+b+c+s;
    printf("%.2f
",g);
    
}