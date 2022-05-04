#include<stdio.h>
int main()
{
    int n,i,d,k,s=0,p,w=0;
    scanf("%d",&n);
    k=n*n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        s=s*10+d;
    }
    p=s*s;
    while(p!=0)
    {
        d=p%10;
        p=p/10;
        w=w*10+d;
    }
    if(w==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}