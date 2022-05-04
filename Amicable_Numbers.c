#include<stdio.h>
int main()
{
    int n,m,arr[100],i,j,k=0,temp,temp2,s=0;
    scanf("%d%d",&n,&m);
    temp=n;
    temp2=m;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            k=k+i;
        }
    }
    for(i=1;i<=m/2;i++)
    {
        if(m%i==0)
        {
            s=s+i;
        }
    }
    if(s==temp && k==temp2)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    return 0;
}