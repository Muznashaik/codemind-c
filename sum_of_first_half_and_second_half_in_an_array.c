#include<stdio.h>
int main()
{
    int n,arr[100],i,j,l=0,h,sum=0,k=0,m;
    scanf("%d",&n);
    h=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=(l+h-1)/2;
    for(i=0;i<=m;i++)
    {
        sum=sum+arr[i];
    }
    for(i=m+1;i<n;i++)
    {
        k=k+arr[i];
    }
    printf("%d
%d",sum,k);
    return 0;
}