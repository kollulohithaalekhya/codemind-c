#include<stdio.h>
int main()
{
    char s1[1000];
    int i,c=1;
    scanf("%[^
]s",s1);
    for(i=0;s1[i]!=NULL;i++)
    {
        if(s1[i]==' ')
        {
            c++;
        }
    }
    printf("%d",c);
}