#include<stdio.h>
int main()
{
    int n,i,d,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    if(temp%s==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}