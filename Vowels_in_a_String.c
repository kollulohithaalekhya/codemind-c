#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    char p;
    scanf("%s",&p);
    int i,b,f=1;
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]==p)
        {
            f=0;
            b=i;
            break;
        }
    }
    if(f==0)
    {
    printf("True
");
    printf("%d",i);
    }
    else
    printf("False");
}