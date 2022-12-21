#include<stdio.h>
#include<stdlib.h>
int getmax(int arr[],int n)
{
    int max=arr[0];
    for(int x=1;x<n;x++)
    {
        if(arr[x]>max)
        {
            max=arr[x];
        }
    }
    return max;
}
void countsort(int arr[],int n)
{
    int output[n+1];
    int max=getmax(arr,n);
    int count[max+1];
    for(int x=0;x<=max;x++)
    {
        count[x]=0;
    }
    for(int x=0;x<n;x++)
    {
        count[arr[x]]++;
    }
    for(int x=1;x<=max;x++)
    {
        count[x]+=count[x-1];
    }
    for(int x=n-1;x>=0;x--)
    {
        output[count[arr[x]]-1]=arr[x];
        count[arr[x]]--;
    }
    for(int x=0;x<n;x++)
    {
        arr[x]=output[x];
    }
}
void printarr(int arr[],int n)
{
    for(int x=0;x<n;x++)
    {
        printf("%d ",arr[x]);
    }
}
int main()
{
    int n=1500;
    int arr[1500];
    for(int x=0;x<n;x++)
    {
        arr[x]=rand()%1500;
    }
    printf("Enter elements:\n");
    for(int x=0;x<n;x++)
    {
        scanf("%d",&arr[x]);
    }
    printf("Before sorting:\n");
    printarr(arr,n);
    countsort(arr,n);
    printf("\nAfter sorting:\n");
    printarr(arr,n);
    return 0;
}