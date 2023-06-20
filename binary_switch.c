#include<stdio.h>

void read(int *,int );
void display(int [10],int );

int main()
{
    int a[10],i,n,temp,org;

    printf("enter the number of ele");
    scanf("%d",&n);

    printf("enter the binary elements");
    read(a,n);

    printf("the array before arranging");
    display(a,n);
    org=n;

    while(org>1)
    {
       for(i=0;i<n-1;i++)
       {
           if(a[i]>a[i+1])
           {
               temp=a[i];
               a[i]=a[i+1];
               a[i+1]=temp;
           }
       }
       org--;
    }

    printf("the ele after arranging are");
    display(a,n);

}

void read(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }
}

void display(int a[10],int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

}
