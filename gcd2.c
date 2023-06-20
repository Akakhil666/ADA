#include<stdio.h>

int main()
{
    int m,n,t;

    printf("enter two numbers");
    scanf("%d %d",&m,&n);

    if(m<n)
    t=m;
    else
    t=n;

    while(m%t!=0 || n%t!=0)
    {
        t--;
    }

    printf("the gcd is %d",t);

    return 0;
}