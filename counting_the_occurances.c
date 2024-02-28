#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^
]s",s);
    char p;
    scanf("%s",&p);
    int i,c=0;
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==p)
        {
            c+=1;
        }
    }
    if(c==0) printf("-1");
    else
    printf("%d",c);
    
}