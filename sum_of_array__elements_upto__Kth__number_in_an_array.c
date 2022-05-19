#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,j,l=0,h,sum=0,m,z,k;
    scanf("%d",&n);
    h=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    m=(l+h-1)/2;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(arr[i]==k)
        {
            break;
        }
    }
    printf("%d",sum);
    return 0;
}