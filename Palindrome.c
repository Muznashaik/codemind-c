#include<stdio.h>
int main()
{
    int n,d,i,s=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s*10+d;
    }
    if(temp==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}