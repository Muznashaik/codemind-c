#include<stdio.h>
int main()
{
    int arr[100],d,max,i,n;
    scanf("%d",&n);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(n)
    {
        d=n%10;
        n=n/10;
        if(max<d)
        {
            max=d;
        }
    }
    printf("%d",max);
    return 0;
}