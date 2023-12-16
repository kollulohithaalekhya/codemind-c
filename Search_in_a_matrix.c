#include<stdio.h>
int main()
{
    int se,n,i,j;
    scanf("%d%d",&se,&n);
    int a[se][n];
    for(i=0;i<se;i++)
    {
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[i][j]);
    }
}
    int p,f=0;
    scanf("%d",&p);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(p==a[i][j])
        {
            f=1;
            break;
        }
        }
    }
    if(f==1)
    printf("1");
    else
    printf("0");
}