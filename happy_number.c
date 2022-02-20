#include<stdio.h>
int main()
{
    int n,i,res=0,d;
    scanf("%d",&n);
    while(n)
    {
        d=n%10;
        n=n/10;
        res=res+d*d;
        if(n==0 && res>9)
        {
            //printf("%d
",res);
            n=res;
            res=0;
        }
    }
    if(res==1 || res==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}