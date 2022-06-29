#include<stdio.h>
int main()
{
    int n,i,j,k=0,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
            if(n==0)
            {
                c++;
            }
            for(j=1;j<=n;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                k++;
            }
        }
    }
    printf("%d",k);
    return 0;
    
}