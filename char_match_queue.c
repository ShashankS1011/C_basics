#include<stdio.h>
#include<string.h>
int main()
{
    char queue[20][20];
    int front=0,rear=0,c=0,z,max=0;
    char name1[20],name2[20];
    front=1;
    rear=1;
    strcpy(queue[rear],"Radha");
    rear=rear+1;
    strcpy(queue[rear],"Aravind");
    rear=rear+1;
    strcpy(queue[rear],"Bhuvana");
    for(int x=0;x<rear;x++)
    {
        for(int y=x+1;y<=rear;y++)
        {
            z=0;
            while(queue[x][z]!='\0')
            {
                if(queue[x][z]==queue[y][z])
                {
                    c++;
                    printf("\nMatched- %d '%c'",c,queue[x][z]);
                }
                z++;
            }
            if(c==0)
            {
                printf("\nNot matched");
            }
            if(max<c)
            {
                max=c;
                strcpy(name1,queue[x]);
                strcpy(name2,queue[y]);
            }
            c=0;
            printf("\n");
        }
    }
    printf("\nHighly matched characters %d: %s %s",max,name1,name2);
    return 0;
}