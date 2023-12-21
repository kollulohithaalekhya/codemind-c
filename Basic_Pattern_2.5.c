#include<stdio.h>
int main()
{
    int n,i,j,rev;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=n;j>=i;j--)
        {
            rev=64+j;
            printf("%c ",64+i);
        }
        printf("
");
    }
}