/*Write a C program to find whether the given number is armstrong number or not.*/

#include<stdio.h>
int main()
{
    int n,x,rem,sum,n1;
    printf("Enter a number:\n");
    scanf("%d",&n);
    n1=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(n1==sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not an armstrong number");
    }
    return 0;
}