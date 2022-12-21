/*Write a C program to enter radius of a circle and find its diameter, circumference and area.*/

#include<stdio.h>
int main()
{
    int r,d;
    float circum,area;
    printf("Enter the radius of a circle:\n");
    scanf("%d",&r);
    d=2*r;
    area=(3.14*r*r);
    circum=(2*3.14*r);
    printf("\nDiameter=%d",d);
    printf("\nArea=%f",area);
    printf("\nCircumference=%f",circum);
    return 0;
}