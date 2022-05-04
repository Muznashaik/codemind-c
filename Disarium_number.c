#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,c=0,temp,s=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        temp=temp/10;
        c++;
    }
    temp=n;
    while(temp!=0)
    {
        d=temp%10;
        temp=temp/10;
        s=s+pow(d,c);
        c--;
    }
    if(n==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}