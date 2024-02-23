#include<stdio.h>
#include<string.h>
int main()
{
    int n;
  scanf("%d",&n);
  for(int j=1;j<=n;j++)
{
    char s[100];
    int c=0;
  scanf("%s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=48 && s[i]<=57)
        {
            c+=1;
        }
    }
    if(c>=1) printf("Yes
");
    else printf("No
");
}
}