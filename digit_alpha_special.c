/*Write a C program to input any character and check whether it is alphabet, digit or special character.*/

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z')
    {
        printf("\nIt is a alphabet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("\nIt is a digit");
    }
    else
    {
        printf("\nIt is a special character");
    }
    return 0;
}