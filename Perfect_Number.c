#include<stdio.h>
int main()
{
    int n,i,s=0,temp;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            s=s+i;
        }
    }
    if(s==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}