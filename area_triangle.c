/*Write a C program to enter base and height of a triangle and find its area.*/

#include<stdio.h>
int main()
{
    int base,height,area;
    printf("Enter the base of the trianlge:\n");
    scanf("%d",&base);
    printf("Enter the height of the triangle:\n");
    scanf("%d",&height);
    area=(height*base)/2;
    printf("Area of the triangle:%d",area);
    return 0;
}