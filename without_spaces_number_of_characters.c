#include<stdio.h>
int main()
{
    char str[100];
    int i,j,c=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]!=' ')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}