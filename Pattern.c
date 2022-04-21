#include<stdio.h>
int main()
{
    int n,i,j,arr[100];
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d ",i);
        }
        printf("
");
    }
    return 0;
}