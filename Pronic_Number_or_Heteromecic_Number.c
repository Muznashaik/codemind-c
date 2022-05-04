#include<stdio.h>
int main()
{
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i*(i+1)==n)
        {
            c++;
        }
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}