#include<stdio.h>
int main()
{
    int n,arr[100][100],i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<2;j++)
        {
            k=k+arr[i][j];
        }
        printf("%d
",k);
    }
    return 0;
}