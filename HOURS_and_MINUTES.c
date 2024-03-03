#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int t=n/60;
    int p=n-60*t;
    printf("%d Hour(s)",t);
    printf(" %d Minute(s)",p);
}