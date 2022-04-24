#include<stdio.h>
int main()
{
    int n,arr[100],i,j,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i]*arr[i];
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i-1;j>=0;j--)
        {
            if(temp>arr[j])
            {
                arr[j+1]=temp;
                break;
            }
            else
            {
                arr[j+1]=arr[j];
            }
        }
        if(j==-1)
        {
            arr[j+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}