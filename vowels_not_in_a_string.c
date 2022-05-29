#include<stdio.h>
int main()
{
    char str[100];
    int i,j,a=0,e=0,k=0,o=0,u=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a')
        {
            a++;
        }
        if(str[i]=='e')
        {
            e++;
        }
        if(str[i]=='i')
        {
            k++;
        }
        if(str[i]=='o')
        {
            o++;
        }
        if(str[i]=='u')
        {
            u++;
        }
    }
    if(a==0)
    {
        printf("a ");
    }
    if(e==0)
    {
        printf("e ");
    }
    if(k==0)
    {
        printf("i ");
    }
    if(o==0)
    {
        printf("o ");
    }
    if(u==0)
    {
        printf("u ");
    }
    else
    {
        printf("0");
    }
}