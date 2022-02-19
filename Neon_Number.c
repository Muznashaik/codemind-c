#include<stdio.h>
int main()
{
    int k,n,i,d,h=0;
    scanf("%d",&n);
    k=n*n;
    while(k!=0)
    {
        d=k%10;
        // k=k/10;
        h=h+d;
        k=k/10;
    }
    //h=h+d;
    if(h==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    return 0;
}