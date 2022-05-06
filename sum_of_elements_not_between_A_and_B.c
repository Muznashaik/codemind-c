#include<stdio.h>
int main()
{
    int n,arr[100],i,j,a,b,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
            continue;
        }
        else
        {
            k=k+arr[i];
        }
    }
    printf("%d",k);
    return 0;
}