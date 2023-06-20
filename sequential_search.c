#include<stdio.h>

int main()
{
    int i,a[20],key,n;

    printf("enter the number of elements ");
    scanf("%d",&n);

    printf("enter hte ele of arry");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("enter the key to be searched");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("the key is found at %d location ",i+1);
            return 0;
        }
    }
    printf("unsuccessful search");

    return 0;

}