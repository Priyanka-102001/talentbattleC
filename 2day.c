#include<stdio.h>

int main()
{
   char n;
printf("enter character");
scanf("%c",&n);

if((n >='a' && n<='z') || (n>='A' && n<= 'Z'))
{
printf("alphabet");
}
else
{
printf("not a alphabet");
}
    return 0;
}
