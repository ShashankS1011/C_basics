/*Write a C program to convert days into years, weeks and days.*/

#include<stdio.h>
int main()
{
    int day,week,year;
    printf("Enter number of days:\n");
    scanf("%d",&day);
    year=day/365;
    week=(day%365)/7;
    day=(day%365)%7;
    printf("Year:%d",year);
    printf("\nWeeks:%d",week);
    printf("\nDays:%d",day);
    return 0;
}