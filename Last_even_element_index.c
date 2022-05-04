#include<stdio.h>
int main()
{
    int n,arr[100],i,k=0,s=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            s=0;
            s=s+i;
            k=k+i;
            j=i+1;
        }
    }
    printf("%d",j-1);
    return 0;
}