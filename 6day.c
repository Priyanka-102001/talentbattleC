#include<stdio.h>
int main()
{
int m, y;
printf("enter month");
scanf("%d",&m);
printf("enter year");
scanf("%d",&y);

if(m==1||m==3||m==5||m==7|| m==10|| m==12)
{
printf("31 days");
}
else if(m==4||m==6||m==8||m==9||m==11)
{
printf("30 days");
}
else if(m==2 && y%4==0)
{
printf("29 days");
}
else if(m==2)
{
printf("28 days ");
}
}
