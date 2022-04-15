#include<stdio.h>
int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n2;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d x %d = %d
",n1,i,i*n1);
    }
    return 0;
}