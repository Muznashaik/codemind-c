#include<stdio.h>
int main()
{
    char str[100];
    int a=0,e=0,i=0,o=0,u=0;
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
            i++;
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
    if(a>0 && e>0 && i>0 && o>0 && u>0)
    {
        printf("True");
    }
    
    else
    {
        printf("False");
    }
    return 0;
}