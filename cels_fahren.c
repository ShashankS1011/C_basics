/*Write a C program to enter temperature in Celsius and convert it into Fahrenheit.*/

#include<stdio.h>
int main()
{
    float cels,fahren;
    printf("Enter temperature in celsius:\n");
    scanf("%f",&cels);
    fahren=((cels*9)/5)+32;
    printf("\nTemperature in fahrenheit is:%f",fahren);
    return 0;
}