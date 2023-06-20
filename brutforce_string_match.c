#include<stdio.h>

int main()
{
    char text[100],pat[20],i,j,n,m;

    printf("enter the text");
    gets(text);

    printf("enter the pattern ");
    gets(pat);

    printf("the text is \n");
    puts(text);

    printf("the pattern is \n");
    puts(pat);

    i=0;
    while(text[i]!='\0')
    i++;

    n=i;

    i=0;
    while(pat[i]!='\0')
    i++;

    m=i;

    printf("%d %d",n,m);

    for(i=0;i<=n-m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(text[i+j]!=pat[j])
            break;
        }
        printf(" %d %d",i,j);
        if(m==j)
        {
            printf("the pattern is found at %d location",i);
            return 0;
        }
    }
    printf("the key is not found");

    return 0;
}