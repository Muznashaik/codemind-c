#include<stdio.h>
int main()
{
    int n,arr[100],i,k,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            s=0;
            s=s+arr[i];
        }
    }
    printf("%d",i-1);
    return 0;
}