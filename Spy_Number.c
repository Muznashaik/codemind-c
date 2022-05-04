#include<stdio.h>
int main()
{
    int n,s=0,k=1,d,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    while(temp!=0)
    {
        d=temp%10;
        temp=temp/10;
        k=k*d;
    }
    if(k==s)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}