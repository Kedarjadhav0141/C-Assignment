#include<stdio.h>
int main(){
    float a,b,am,hm;

    printf("Enter two numbers : ");
    scanf("%f%f",&a,&b);

    am=(a+b)/2;
    hm=2*a*b/(a+b);

    printf("Arithmetic mean is : %.2f \n",am);
    printf("Harmonic mean is : %.2f",hm);
}