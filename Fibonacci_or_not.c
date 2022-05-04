#include<stdio.h>
int main()
{
    int n,arr[100],i,a=0,b=1,c=0;
    scanf("%d",&n);
    for(i=a;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            printf("True");
            break;
        }
        if(c>n)
        {
            printf("False");
            break;
        }
        a=b;
        b=c;
    }
    return 0;
}