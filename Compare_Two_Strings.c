#include<stdio.h>
#include<string.h>
int main()
{
    int len1=0,len2=0,i;
    int flag=0;
    char s1[20];
    char s2[20];
    scanf("%[^
]s",s1);
    scanf(" %[^
]s",s2);
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1!=len2)
    printf("Strings are not Equal");
    else
    {
        while(s1[i]!=NULL && s2[i]!=NULL)
        {
            if(s1[i]!=s2[i])
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0)
        printf("Strings are Equal");
        else
        printf("Strings are not Equal");
    }
}