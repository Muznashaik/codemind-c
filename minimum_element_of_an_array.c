#include<stdio.h>
int main()
{
    int n,arr[100],i,j,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d",min);
    return 0;
}