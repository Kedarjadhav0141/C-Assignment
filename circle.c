#include<stdio.h>
int main(){
    float r,area,circumf;

    printf("Enter radius of circle : ");
    scanf("%f", &r);

    area=3.14*(r*r);
    circumf=2*(3.14*r);

    printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f", circumf);

    return 0;
}