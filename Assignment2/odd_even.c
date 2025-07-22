/*Write a program to check whether given number is even or odd (with if and 
conditional operator ?:)? */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);

    (n&1)?printf("Number is odd") : printf("Number is even");
    return 0;

}
