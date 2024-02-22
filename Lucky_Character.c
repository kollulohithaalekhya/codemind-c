#include<stdio.h>
int main()
{
    char s1[10],c=0;
    int i,len=10;
    scanf("%[^
]s",s1);
    for(i=0;i<len;i++)
    {
        if(i==6)
        {
            c=s1[i];
            printf("%c",c);
            break;
        }
    }
}