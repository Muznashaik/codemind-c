#include<stdio.h>
int main()
{
    int n,m=0,i,temp,d;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        if(d==0)
        {
            continue;
        }
        m=m*10+d;
    }
    printf("%d",m);
    return 0;
}