/*. Write a program to check whether given number is divisible by 5 and 7? 
(with && operator and with nested if) */


#include<stdio.h>
int main(){
    int n;

    printf("Enter a number :");
    scanf("%d",&n);
//With && operator
/*
    if(n%5==0 && n%7==0)
    printf("number %d is divisible by 5 and 7", n);
    else 
    printf("number %d is Not divisible by 5 and 7", n);

    */

    // with nested if

    if(n%5==0){
        if(n%7==0){
            printf("Number is divisible by both 5 and 7");
        }
        else{
            printf("Number is divisible by 5 but not by 7");
        }
    } else{
        printf("Number is not divisible by 5");
    }
       
return 0;
}