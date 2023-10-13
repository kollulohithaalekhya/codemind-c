#include<stdio.h>
int main()
{
    int u,v,w,x,y;
    scanf("%d%d%d%d%d",&u,&v,&w,&x,&y);
    int a= ((u+v+w+x+y)*100)/500;
    if(a>=90)
    {
        printf("Grade A");
    }
    else if(a>=80)
    {
        printf("Grade B");
    }
    else if(a>=70)
    {
        printf("Grade C");
    }
    else if(a>=60)
    {
        printf("Grade D");
    }
    else if(a>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}