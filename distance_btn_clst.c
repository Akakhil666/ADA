#include<stdio.h>

void findmin(int [],int );

int main()
{
    int a[20],n,i;

    printf("enter the number of elements");
    scanf("%d",&n);

    printf("enter the elemets of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    findmin(a,n);

    return 0;
}

void findmin(int a[20],int n)
{
    int i,j,left,right,min,diff;

    min=100;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>=a[j])
            {
                diff=a[i]-a[j];
            }
            else
            {
                diff=a[j]-a[i];
            }

            if(diff<min)
            {
                min=diff;
                right=j;
                left=i;
            }
        }
    }

    printf("\nthe closet elements are %d and %d and the distance is %d",a[left],a[right],right-left);
}