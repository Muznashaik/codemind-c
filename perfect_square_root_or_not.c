#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,m;
    float z;
    scanf("%d",&n);
    z=sqrt(n);
    m=z;
    if(m==z)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}