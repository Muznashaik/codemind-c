#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[1000],d,i,c=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        k=log10(arr[i])+1;
        if(k%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
