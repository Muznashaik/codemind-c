#include<stdio.h>
int main()
{
    int n,arr[100],i,c=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c>1)
        {
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}