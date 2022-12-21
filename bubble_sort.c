#include<stdio.h>
void bubblesort(char array[],int size)
{
    for(int x=0;x<size-1;x++)
    {
        for(int y=0;y<size-x-1;y++)
        {
            if(array[y]>array[y+1])
            {
                int temp=array[y];
                array[y]=array[y+1];
                array[y+1]=temp;
            }
        }
    }
}
void printarray(char array[],int size)
{
    for(int x=0;x<size;x++)
    {
        printf("%d ",array[x]);
    }
    printf("\n");
}
int main()
{
    char data[]={"Shashank","yajur","Ansh","Aakarsh"};
    int size=sizeof(data)/sizeof(data[0]);
    bubblesort(data,size);
    printf("Sorted array:\n");
    printarray(data,size);
    return 0;
}