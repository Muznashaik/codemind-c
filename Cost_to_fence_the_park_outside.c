#include<stdio.h>
int main()
{
    int l,b,w,ar,A,c,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    
    A=l*b;
    a=(l+2*w)*(b+2*w);
    ar=a-A;
    ar=ar*c;
    printf("%d",ar);
    return 0;
}