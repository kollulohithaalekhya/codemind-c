#include<stdio.h>
#include<string.h>
int main()
{
    int len=0,i,temp;
    char s1[20];
    scanf("%[^
]s",s1);
    len=strlen(s1);
    for(i=0;i<(len)/2;i++)
    {
        temp=s1[i];
        s1[i]=s1[len-i-1];
        s1[len-i-1]=temp;
    }
     printf("%s",s1);
}