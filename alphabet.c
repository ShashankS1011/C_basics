/*Write a C program to check whether a character is alphabet or not.*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("\nIt is an alphabet");
    }
    else
    {
        printf("\nIt is not an alphabet");
    }
    return 0;
}