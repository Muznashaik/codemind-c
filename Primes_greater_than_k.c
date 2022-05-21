#include<stdio.h>
int main()
{
    int n,arr[1000],i,j,c=0,temp,s=0,k,z=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        c=0;
        temp=arr[i];
        for(j=1;j<=arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            if(arr[i]>=k)
            {
                z++;
            }
        }
    }
    printf("%d",z);
    return 0;
}