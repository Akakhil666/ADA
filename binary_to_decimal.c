#include<stdio.h>

int main()
{
    int n,dec=0,rem,base=1;

    printf("enter the number in binary form");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        dec=rem*base+dec;
        base=base*2;
        n=n/10;
    }

    printf("the number in decimal is %d",dec);

}