#include<stdio.h>
int fun(int n)
{
    int d,temp,c=0,cc=0;
    temp=n;
    while(n)
    {
        d=n%10;
        if(d==0)
        {
            return 0;
        }
        if(temp%d==0)
        {
            cc++;
        }
        c++;
        n=n/10;
    }
    if(c==cc)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int main()
{
    int i,n1,n2;
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        if(fun(i))//10
        {
            printf("%d ",i);
        }
    }
}