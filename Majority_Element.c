#include<stdio.h>
int main()
{
    int n,arr[100],i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=i;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                c++;
            }
        }
        if(c>n/2)
        {
            printf("%d",arr[i]);
            arr[i]=-1;
            break;
        }
    }
    return 0;
}