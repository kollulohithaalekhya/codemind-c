#include<stdio.h>
int main()
{
    int i,j,n,m,a,b;
    scanf("%d%d",&n,&m);
    int d[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&d[i][j]);
        }
    }
    scanf("%d%d",&a,&b);
    int c[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&c[i][j]);
        }
    }
    if(m==b && n==a)
    {
       for(i=0;i<n;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",d[i][j]+c[i][j]);
        }
        printf("
");
    }
    }
}