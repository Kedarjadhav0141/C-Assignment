#include<stdio.h>
int main(){
    float temp,cels,kelv;

    printf("Enter the temprature in fahrenheit : ");
    scanf("%f",&temp);

    cels=(temp-32)*(5.0/9.0);
    kelv=(temp-32)*(5.0/9.0)+273.15;

    printf("Temperature in celsius is : %.2f\n",cels);
    printf("Temperature in kelvin is  : %.2f\n",kelv);

    return 0;
}