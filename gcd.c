#include<stdio.h>

int main()
{
    int m,n,rem=1;

    printf("enter two numbers");
    scanf("%d %d",&m,&n);

    while(n!=0)
    {
        rem=m%n;
        m=n;
        n=rem;
    }

    printf("the  gcd is %d",m);

    return 0;
}