#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    float s=sqrt(pow((c-a),2)+pow((d-b),2));
    printf("%.4f",s);
}