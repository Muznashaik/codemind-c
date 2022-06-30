#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],i,j,s=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        s=s+pow(2,k)*arr[i];
        k++;
    }
    printf("%d",s);
    return 0;
}