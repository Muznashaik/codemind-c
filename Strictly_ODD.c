#include<stdio.h>
int main()
{
    int arr[100],c=0,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1 && i%2==0)
        {
            c=1;
            printf("False");
            break;
        }
    }
    if(c==0)
    {
        printf("True");
    }
    return 0;
}