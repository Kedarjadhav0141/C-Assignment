/*Write a program to check whether given number is positive or negative? */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    (n>=0)? printf("Number is positive") : printf("Number is negative");

    return 0;
}