/* Accept the x and y coordinates of two points and compute the distance between 
the two points. */
#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,dist;

    printf("Enter x1 and y1 : ");
    scanf("%f%f",&x1,&y1);

    printf("Enter x2 and y2 :");
    scanf("%f%f",&x2,&y2);

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance is : %.2f",dist);

    return 0;
}