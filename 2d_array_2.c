#include<stdio.h>
int main()
{
    int arr[3][3],arr1[3][3],sum[3][3];
    printf("Enter the elements of first matrix:\n");
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("Enter the value for [%d][%d]:",x,y);
            scanf("%d",&arr[x][y]);
        }
    }
    printf("Enter the elements of the second matrix:\n");
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("Enter the value for [%d][%d]:",x,y);
            scanf("%d",&arr1[x][y]);
        }
    }
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            sum[x][y]=arr[x][y]+arr1[x][y];
        }
    }
    printf("Sum of the two matrices:\n");
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("%d ",sum[x][y]);
        }
        printf("\n");
    }
    return 0;
}