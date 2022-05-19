#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,a,b,sum=0,x=0;
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
            x++;
            sum=sum+arr[i];
        }
    }
    if(x==0)
    {
        printf("-1");
    }
    printf("%d",sum);
    return 0;
    
}