/*Write a C program to get length and breadth of a rectangle and find its area & perimeter.*/

#include<stdio.h>
int main()
{
    int length,breadth,peri;
    printf("Enter the length and breadth of rectangle:\n");
    scanf("%d%d",&length,&breadth);
    float area;
    area=length*breadth;
    peri=2*(length+breadth);
    printf("Perimeter=%d",peri);
    printf("\nArea=%f",area);
    return 0;
}