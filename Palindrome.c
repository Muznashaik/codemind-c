#include<stdio.h>
int main()
{
    int n,d,k=0,i,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        k=k*10+d;
        n=n/10;
    }
    if(temp==k)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}