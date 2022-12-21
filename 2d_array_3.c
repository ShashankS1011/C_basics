#include<stdio.h>
int main()
{
    int arr[3][3],arr1[3][3],prod[3][3];
    printf("Enter the elements of first matrix:\n");
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("Enter the value for [%d][%d]:",x,y);
            scanf("%d",&arr[x][y]);
        }
    }
    printf("Enter the elements of second matrix:\n");
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
            prod[x][y]=0;
            for(int z=0;z<3;z++)
            {
                prod[x][y]+=arr[x][z]*arr1[z][y];
            }
        }
    }
    printf("The product of 2 matrices:\n");
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("%d ",prod[x][y]);
        }
        printf("\n");
    }
    return 0;
}