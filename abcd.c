#include<stdio.h>
int main()
{
    int d,y,m,rem,rem1,rem2,rem3,sum=0,sum1=0,sum2=0,c,tot,tot1;
    printf("Enter date of birth(DD/MM/YYYY):\n");
    scanf("%d%d%d",&d,&m,&y);
    while(d!=0)
    {
        rem=d%10;
        sum=sum+rem;
        d=d/10;
    }
    while(m!=0)
    {
        rem1=m%10;
        sum1=sum1+rem1;
        m=m/10;
    }
    while(y!=0)
    {
        rem2=y%10;
        sum2=sum2+rem2;
        y=y/10;
    }
    tot=sum+sum1+sum2;
    printf("Sum=%d",tot);
    while(sum!=0)
    {
        rem3=tot%10;
        tot1=tot1+rem3;
        tot=tot/10;
    }
    printf("New sum=%d",tot1);
    return 0;
}