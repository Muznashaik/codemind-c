#include<stdio.h>
int main()
{
    int n,arr[100],i,temp,s=0,c=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        s=0;
        while(arr[i]!=0)
        {
            d=arr[i]%10;
            arr[i]=arr[i]/10;
            s=s*10+d;
        }
        printf("%d ",s);
    }
    return 0;
}