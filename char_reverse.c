/*Write a program in C to print individual characters of string in reverse order.*/

#include <stdio.h>
int main()
{
    char str[50];
    int l;
       printf("Enter a string:\n");
       scanf("%s",&str);
	   l=strlen(str);
	   printf("The characters of the string in reverse are:\n");
       for(int x=l;x>=0;x--)
        {
          printf("%c  ", str[x]);
        }
    printf("\n");
    return 0;
}