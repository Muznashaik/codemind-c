#include<stdio.h>
int main()
{
    int n,i,m,arr[100],k=0,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==m)
            {
                k++;
            }
        }
    }
    printf("%d",k);
    return 0;
}