#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d",&n);
    for(int x=0;x<=n;x++)
    {
        for(int y=1;y<=n-x;y++)
        {
            printf(" ");
        }
        for(int y=1;y<=(2*x)-1;y++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int x=n-1;x>=1;x--)
    {
        for(int y=1;y<=n-x;y++)
        {
            printf(" ");
        }
        for(int y=1;y<=(2*x)-1;y++)
        {
            printf("*");           
        }
        printf("\n");
    }
    return 0;
}