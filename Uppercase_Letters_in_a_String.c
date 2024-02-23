#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100];
    scanf("%[^
]s",s1);
    int len=strlen(s1);
    int c=0;
    for(int i=0;i<len;i++)
    {
        if(s1[i]<65 || s1[i]>91)
        {
            c+=1;
        }
    }
    printf("%d",len-c);
}