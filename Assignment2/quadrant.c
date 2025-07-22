/*Accept the x and y coordinate of a point and find the quadrant in which the 
point lies. (2 logics and origin condition) */
#include<stdio.h>
int main(){
    float x,y;
    printf("Enter the co-ordinates of point : ");
    scanf("%f%f",&x,&y);

    if(x==0 && y==0)
    printf("Point lies on origin");
    else if(x>0 && y>0)
    printf("point lies in first quadrant");
    else if(x<0 && y>0)
    printf("point lies in second quadrant");
    else if(x<0 && y<0)
    printf("point lies in third quadrant");
    else if(x>0 && y<0)
    printf("point lies in fourth quadrant");
    else if(x==0)
    printf("point lies on y axis");
    else if(y==0)
    printf("point lies on x axis");

return 0;
}