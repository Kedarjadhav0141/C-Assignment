#include<stdio.h>
int main(){
    float u,a,t,v,s;

    printf("Enter Initial Velocity(u) :");
    scanf("%f",&u);
    printf("Acceleration :");
    scanf("%f",&a);
    printf("Time : ");
    scanf("%f",&t);


    v=u+(a*t);
    s=u*t+(0.5*a*t*t);

    printf("Final Velocity is : %.2f m/s\n",v);
    printf("Distance Travelled is : %.2f meters: ",s);

    return 0;
}