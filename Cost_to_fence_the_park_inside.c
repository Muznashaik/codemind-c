#include<stdio.h>
int main()
{
    int l,b,w,ar,c,A,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    if(l<=2*w||b<=2*w)
    {
        printf("Impossible");
    }
    else
    {
        A=l*b;
        ar=2*w*(l+b-2*w);
        ar=ar*c;
        printf("%d",ar);
    }
    return 0;
}