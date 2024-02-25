#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    scanf("%s",s);
    int i,sum=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
        {
        sum+=(s[i]-'0');
        }
    }
    printf("%d",sum);
}