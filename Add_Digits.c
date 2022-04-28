#include<stdio.h>
int main()
{
    int n,i,k=0,s=0,d,c=0,t=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s+d;
    }
    while(s!=0)
    {
        d=s%10;
        s=s/10;
        c++;
        k=k+d;
    }
    if(c==2)
    {
        while(k!=0)
        {
            d=k%10;
            k=k/10;
            t=t+d;
        }
        printf("%d",t);
    }
    else
    {
        printf("%d",k);
    }
    return 0;
}