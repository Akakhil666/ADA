#include<stdio.h>

int main()
{
    int i,n,r,l,m,a[20],key;

    printf("enter the number of elements ");
    scanf("%d",&n);

    printf("enter hte ele of arry");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter the key to be searched");
    scanf("%d",&key);

    l=0;
    r=n-1;
    m=(r+l)/2;

    while(l<=r)
    {
        if(key>a[m])
        {
           l=m+1;
        }
        else if(key<a[m])
        {
            r=m-1;
        }
        else
        {
            printf("the key is found at %d location ",m);
            return 0;
        }

        m=(l+r)/2;
    }
    printf("unsuccessful search");
    return 0;
}