#include<stdio.h>
int main()
{
    int c=0,n,k=1,i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        d=n%10;
        n=n/10;
        c=c+d;
        k=k*d;
    }
    c=c+n;
    if(c==k)
    {
        
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
    
}