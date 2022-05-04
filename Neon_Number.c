#include<stdio.h>
int main()
{
    int n,k,d,s=0;
    scanf("%d",&n);
    k=n*n;
    while(k!=0)
    {
        d=k%10;
        k=k/10;
        s=s+d;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}