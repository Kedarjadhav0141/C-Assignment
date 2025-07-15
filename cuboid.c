/*Accept three dimensions length (l), breadth(b) and height(h) of a cuboid and
print surface area and volume.*/

#include<stdio.h>
int main(){
    int l,b,h;
    float sa,vol;

    printf("Enter length of cuboid : ");
    scanf("%d",&l);
    printf("Enter height of cuboid : ");
    scanf("%d",&b);
    printf("Enter breadth of cuboid : ");
    scanf("%d",&h);

    sa = 2*((l*b)+(l*h)+(b*h));
    vol = l*b*h;

    printf("Surface area of cuboid is : %.2f\n", sa);
    printf("Volume of cuboid is : %.2f\n", vol);


}