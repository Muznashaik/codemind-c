#include<stdio.h>
int main()
{
    int n,arr[100],i,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&j);
    for(i=0;i<n;i++)
    {
        if(arr[i]==j)
        {
        flag=1;
        break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}