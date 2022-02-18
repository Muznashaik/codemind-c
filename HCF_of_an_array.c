#include<stdio.h>
int main()
{
    int arr[100],i,n,gcd,j=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    gcd=arr[0];
    while(j<n)
    {
        if(arr[j]%gcd==0)
        {
            j++;
        }
        else
        {
            gcd=arr[j]%gcd;
            i++;
        }
    }
    printf("%d",gcd);
    return 0;
}