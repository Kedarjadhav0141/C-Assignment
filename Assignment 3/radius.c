#include<stdio.h>
int main(){
    int opt;
    float r,pi = 3.14;

    printf("Enter Radius : \n");
    scanf("%f",&r);
    printf("Choose an option : \n");
    printf("1. Area of circle \n");
    printf("2. Circumference of circle \n");
    printf("3. Volume of Sphere \n");
    printf("Enter your choice(1-3)\n");
    scanf("%d",&opt);

    switch(opt){
        case 1 : {
           float a_circle = pi*(r*r);
           printf("Area of circle for radius %.2f is : %.2f\n",r, a_circle);
        }
        break;

        case 2 : {
           float c_circle = 2*pi*r;
           printf("Circumference of circle for radius %.2f is : %.2f\n",r, c_circle);
        }
        break;

        case 3 : {
            float v_sphere =(4.0/3.0)*pi*r*r*r;
            printf("Volume of sphere for radius %.2f is : %.2f\n",r, v_sphere);
        }
        break;
        default : printf("Invalid option, choose the correct option");
    }
    
    return 0;

}