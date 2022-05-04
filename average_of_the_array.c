#include<stdio.h>
int main()
{
    int n,arr[100],i,k=0;
    float s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=k+arr[i];
    }
    s=(float)k/n;
    printf("%.2f",s);
    return 0;
}