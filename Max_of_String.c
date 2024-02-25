#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,b=65;
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]>b)
        b=s[i];
    }
    printf("%c",b);
}