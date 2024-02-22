#include<stdio.h>
int main()
{
    char s1[1000];
    scanf("%[^
]s",s1);
    int i,c=0;
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u')
        {
            c++;
        }
    }
    printf("%d",c);
}