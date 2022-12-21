#include<stdio.h>
int main()
{
    int ch=65;
    for(int x=0;x<=5;x++)
    {
        for(int y=5;y>=x;y--)
        {
            printf(" ");
            for(int z=1;z<=x;z++)
            {
                printf("%c",ch++);
                ch--;
            }
            for(int a=1;a<x;a++)
            {
                printf("%c",ch--);
            }
        }
        printf("\n");
        ch=65;
    }
    return 0;
}