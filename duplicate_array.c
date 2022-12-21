/*Write a program in C to count a total number of duplicate elements in an array.*/

#include<string.h>
int main()
{
    int arr1[50],arr2[50],arr3[50],n,c=0,c1=1;
    printf("Input the number of elements to store:\n");
    scanf("%d",&n);
    printf("Input %d elements:\n",n);
    for(int x=0;x<n;x++)
    {
        printf("Element %d:",x);
        scanf("%d",&arr1[x]);
    }
    for(int x=0;x<n;x++)
    {
        arr2[x]=arr1[x];
        arr3[x]=0;
    }
    for(int x=0;x<n;x++)
    {
        for(int y=0;y<n;y++)
        {
            if(arr1[x]==arr2[y])
            {
                arr3[y]=c1;
                c1++;
            }
        }
        c1=1;
    }
    for(int x=0;x<n;x++)
    {
        if(arr3[x]==2)
        {
            c++;
        }
    }
    printf("The total number of duplicate elements found in the array: %d\n",c);
    return 0;
}