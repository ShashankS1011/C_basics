/*Write a C program to input decimal number from user and convert to binary number system.
Example:
Input:
Input decimal number: 112
Output:
Binary number: 0111000
*/

#include<stdio.h>
int main()
{
    int n,bin=0,p=1,rem=0;
    printf("Enter a decimal number:\n");
    scanf("%d",&n);
    while(n)
    {
        rem=n%2;
        bin=bin+(rem*p);
        p=p*10;
        n=n/2;
    }
    printf("\nIt's binary equivalent:%d",bin);
    return 0;

}