#include<stdio.h>

int main()
{
int x, y;
    printf("enter x coordinates");
    scanf("%d",&x);
    printf("enter y coordinate");
    scanf("%d",&y);
    
    if(x>0 && y>>0)
    {
    printf("point is in 1 quadrant");
    
    }
    else if(x<0 && y>0)
    {
    printf("point is in 2 quadrant");
    }
    else if(x<0 && y<0)
    {
    printf("point is in 3 quadrant");
    }
    else if(x>0 && y<0)
    {
    printf("point is in 2 quadrant");
    }
    return 0;
}
