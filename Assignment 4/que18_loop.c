/*Write a program to find sum of even numbers from x to y (both inclusive) */
#include<stdio.h>
int main(){
    int x,y,sum=0,start;

    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y : ");
    scanf("%d",&y);

    start = x;
    if(x%2!=0){
        x++;
    }

    while(x<=y){
        sum = sum+x;
        x+=2;
    }
    printf("Sum of even numbers from %d to %d is : %d",start,y,sum);
return 0;
}