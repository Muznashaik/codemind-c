#include<stdio.h>
int main()
{
    int d,n,i,res=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        res=res*10+d;
        //printf("%d",res);
    }
    printf("%d",res);
    return 0;
}