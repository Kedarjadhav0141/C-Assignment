Consider /*a room having one door and two windows both of the same size. 
Accept dimensions of the room, door and window. Print the area to be painted 
(interior walls) and area to be whitewashed (roof).*/

#include <stddef.h>
#include<stdio.h>
#include <math.h>

int main(){
    float length, breadth, height;
    float d_width, d_height;
    float w_width, w_height;
    float wall_area, d_area, w_area, paint_area, roof_area;
    
    printf("Enter length, breadth, and height of the room :");
    scanf("%f%f%f",&length,&breadth,&height);

    printf("Enter width and height of door :");
    scanf("%f%f",&d_width,&d_height);

    printf("Enter width and height of window : ");
    scanf("%f%f",&w_width,&w_height);

    wall_area = 2 * (length + breadth) * height;
    d_area = d_width * d_height;
    w_area = w_width * w_height;

    paint_area = wall_area - d_area - 2*w_area;
    roof_area = length * breadth;

    printf("Area to be painted(walls): %.2f sq units\n", paint_area);
    printf("Area to be whitewashed(roof): %.2f sq units\n", roof_area);

    return 0;
}