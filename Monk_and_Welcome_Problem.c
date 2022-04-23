#include<stdio.h>
int main()
{
    int n,a[100],b[100],i,k[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        k[i]=a[i]+b[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",k[i]);
    }
    return 0;
}