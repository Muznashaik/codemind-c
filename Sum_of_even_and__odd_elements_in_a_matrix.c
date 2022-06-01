#include<stdio.h>
int main()
{
    int r,c,arr[100][100],i,j,sum=0,k=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]%2==0)
            sum=sum+arr[i][j];
            else
            k=k+arr[i][j];
        }
    }
    printf("%d %d",sum,k);
    return 0;
    
}