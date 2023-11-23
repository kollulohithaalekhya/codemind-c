#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i%3==0 && i%5==0 && i%7==0)
        printf("PlingPlangPlong");
    else if(i%3==0 && i%5==0)
    printf("PlingPlang");
    else if(i%5==0 && i%7==0)
    printf("PlangPlong");
    else if(i%3==0 && i%7==0)
    printf("PlingPlong");
    else if(i%3==0)
    printf("Pling");
    else if(i%5==0)
    printf("Plang");
    else if(i%7==0)
    printf("Plong");
    else
    printf("%d",i);
}