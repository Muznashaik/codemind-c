#include<stdio.h>
int main()
{
    int n,i,j,arr[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        c=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c+=1;
            }
        }
        if(c<=1)
        {
            printf("%d ",arr[i]);
        }
        
    }
    return 0;
}