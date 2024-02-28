#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]s",s);
    int i,c=0;
    int len= strlen(s);
    for(i=0;i<len;i++)
    {
        if(len==10)
        {
           if(s[i]!=0)
           {
               c+=1;
               break;
           }
        }
    }
    if(c==1)printf("Valid");
    else printf("Invalid");
}