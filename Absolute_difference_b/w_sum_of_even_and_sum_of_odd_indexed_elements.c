#include<stdio.h>
int main()
{
    int n,arr[100],i,s=0,k=0,p,q;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            s=s+arr[i];
        }
        else
        {
            k=k+arr[i];
        }
    }
    if(s>k)
    {
        p=s-k;
        printf("%d",p);
    }
    else
    {
        q=k-s;
        printf("%d",q);
    }
    return 0;
}