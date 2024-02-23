#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int c=0;
  scanf("%[^
]s",s);
    for(int i=0;s[i]!=NULL;i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            c+=1;
        }
    }
 printf("%d",c);
}