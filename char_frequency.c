/*Write a program in C to find maximum occurring character in a string.*/

#include<stdio.h>
int main()
{
    char str[50],max;
    int l,a=-1;
    int freq[100]={0};
    printf("Enter a string:\n");
    scanf("%s",&str);
    l=strlen(str);
    for(int x=0;x<l;x++)
    {
        freq[str[x]]++;
    }
    for(int x=0;x<256;x++)
  	{
		if(freq[x]>freq[a])
		{
			a=x;
		}
	}
    for(int x=0;x<l;x++)
    {
        if(a<freq[str[x]])
        {
            a=freq[str[x]];
            max=str[x];
        }
    }
    printf("\nHighest frequency of character '%c'\n",max);
    printf("It appears %d times",freq[a]);
    return 0;
}