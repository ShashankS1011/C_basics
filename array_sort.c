/*Write a program in C to sort elements of array in ascending order.*/

#include<stdio.h>
int main()
{
    int arr[50],n,t;
    printf("Input the size of array:\n");
    scanf("%d",&n);
    printf("Input %d elements:\n",n);
    for(int x=0;x<n;x++)
    {
        printf("Element %d:",x);
        scanf("%d",&arr[x]);
    }
    for(int x=0;x<n;x++)
    {
        for(int y=x+1;y<n;y++)
        {
            if(arr[y]<arr[x])
            {
                t=arr[x];
                arr[x]=arr[y];
                arr[y]=t;
            }
        }
    }
    printf("\nArray sorted in ascending order:\n");
    for(int x=0;x<n;x++)
    {
        printf("%d ",arr[x]);
    }
    printf("\n");
    return 0;
}