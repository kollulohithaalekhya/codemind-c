#include<stdio.h>
int main()
{
    char s1[20];
    char s2[20];
    scanf("%[^
]s",s2);
    int i;
    for(i=0;s2[i]!=NULL;i++)
    {
        s1[i]=s2[i];
    }
    s1[i]=NULL;
    printf("%s",s1);
 
}