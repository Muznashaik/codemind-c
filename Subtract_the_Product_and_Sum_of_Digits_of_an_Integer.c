#include<stdio.h>
int main()
{
    int res=0,n,d,k=1,sum=0;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        k=k*d;
        sum=sum+d;
    }
    res=k-sum;
    printf("%d",res);
    return 0;
}