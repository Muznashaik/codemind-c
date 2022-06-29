#include<stdio.h>
int main()
{
    int n,arr[100],avg,k=0,i,j=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=k+arr[i];
    }
    avg=k/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            j++;
        }
    }
    if(j==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
    return 0;
}