#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%[^
]s",s);
    int i,b,f=1;
    int len=strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]!='A'||s[i]!='E'||s[i]!='I'||s[i]!='O'||s[i]!='U'||s[i]!='a'||s[i]!='e'||s[i]!='i'||s[i]!='o'||s[i]!='u')
        {
            b++;
        }
    }
    printf("%d",b);
}