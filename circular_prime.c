#include<stdio.h>
int main()
{
    int n,i,c=0,temp,d,s=0,k=0;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    while(temp!=0)
    {
        d=temp%10;
        temp=temp/10;
        s=s*10+d;
    }
    for(i=1;i<=s;i++)
    {
        if(s%i==0)
        {
            k++;
        }
    }
    if(k==2 && c==2)
    {
        printf("circular prime");
    }
    else if(k!=2 && c==2)
    {
        printf("prime but not a circular prime");
        
    }
    else
    {
        printf("not prime");
    }
    return 0;
}