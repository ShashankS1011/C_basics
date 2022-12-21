#include<stdio.h>
int main()
{
    int arr[5],n,sum=0;
    float avg;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    for(int x=0;x<5;x++)
    {
        scanf("%d",&arr[x]);
        sum=sum+arr[x];
    }
    printf("Elements of array:\n");
    for(int y=0;y<5;y++)
    {
        printf("%d ",arr[y]);
    }
    avg=sum/5;
    printf("\nSum=%d",sum);
    printf("\nAverage=%f",avg);
    return 0;
}