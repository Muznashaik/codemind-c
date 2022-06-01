#include<stdio.h>
int main()
{
    int r,c,a,b,arr[100][100],i,j,s=0,k=0;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        k=0;
        for(i=0;i<r;i++)
        {
           k=k+arr[i][j];
        }
        if(k>s)
        {
            s=k;
        }
    }
        
  printf("%d",s);
    return 0;
    
}