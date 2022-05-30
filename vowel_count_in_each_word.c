#include<stdio.h>
int main()
{
    char str[100];
    int i,j,k=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='o'||str[i]=='u'||str[i]=='i')
        k++;
        if(str[i]==' ')
        {
            printf("%d ",k);
            k=0;
        }
    }
    printf("%d ",k);
    return 0;
}