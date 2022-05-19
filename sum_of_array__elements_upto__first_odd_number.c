#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,j,l=0,h,sum=0,k=0,m,z;
    scanf("%d",&n);
    h=n-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=(l+h-1)/2;
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
            break;
        }
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}