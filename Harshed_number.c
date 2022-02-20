#include<stdio.h>
int main()
{
    int n,d,i,sum=0,temp,k,res=0;
    scanf("%d",&n);
    k=n/2;
    temp=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        res=res+d;
        sum=k*res;
    }
    if(temp%res==0 || temp/res==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}