/* Write a C program to enter length in centimeter and convert it into meter and kilometer.*/

#include<stdio.h>
int main()
{
    int cm;
    float m,km;
    printf("Enter value of cm:\n");
    scanf("%d",&cm);
    m=cm/100.0;
    km=cm/10000.0;
    printf("\n%d cm in meters=%f m",cm,m);
    printf("\n%d cm in kilometers=%f km",cm,km);
    return 0;
}