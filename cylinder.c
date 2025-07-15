#include<stdio.h>
int main(){
    float r,h,surfarea,vol;

    printf("Enter Radius & Height of cylinder : ");
    scanf("%f %f",&r,&h);

    surfarea=2*3.14*r*(r+h);
    vol=3.14*r*r*h;

    printf("Surface area = %.2f\n",surfarea);
    printf("Volume = %.2f",vol);

    return 0;
}