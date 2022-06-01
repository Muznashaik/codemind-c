#include<stdio.h>
int main()
{
    int r,c,arr[100][100],i,j,s=0,k=0,z=0,q=0;
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
        k=0;
        for(j=0;j<c;j++)
        {
           k=k+arr[i][j];
        }
        if(k>s)
        {
            s=k;
        }
    }
    for(j=0;j<c;j++)
    {
        z=0;
        for(i=0;i<r;i++)
        {
            z=z+arr[i][j];
        }
        if(z>q)
        {
            q=z;
        }
    }
    if(s>q)
    {
        printf("%d",s);
    }
    else
    {
        printf("%d",q);
    }
    return 0;
    
}