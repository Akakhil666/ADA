//      selection sort
#include<stdio.h>

int main()
{
    int i,n,a[10],j,min,temp;

    printf("enter the number of elements ");
    scanf("%d",&n);

    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nthe array before sorting is\n ");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i+1;j<=n-1;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    printf("\n the array after sorting");

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

     
}
