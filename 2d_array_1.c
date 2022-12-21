#include<stdio.h>
int main()
{
    int arr[3][3];
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("Enter the value for [%d][%d]:",x,y);
            scanf("%d",&arr[x][y]);
        }
    }
    printf("Two dimensional array elements:\n");
    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            printf("%d ",arr[x][y]);
        }
        printf("\n");
    }
    return 0;
}