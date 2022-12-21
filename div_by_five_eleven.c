/*Write a C program to check whether a number is divisible by 5 and 11 or not.*/

#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a%5==0)
    {
        printf("Number is divisible by 5");
    }
    else if(a%11==0)
    {
        printf("Number is divisible by 11");
    }
    else
    {
        printf("Neither divisible by 5 or 11");
    }
    return 0;
}