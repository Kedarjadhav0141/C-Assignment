/*Write a program to check whether given number is divisible by 5 or 7? (with || 
operator and with else if)*/
#include<stdio.h>
int main(){
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);
// with || operator
   /* if(n%5==0 || n%7==0)
        printf("Number is divisible by 5 or 7");
    else 
        printf("Number is Not divisible by 5 or 7");
    
    */

// with else if
    
    if(n%5==0)
    printf("Number is divisible by 5 ");
    else if (n%7==0)
    printf("Number is divisible by 7");
    else
    printf("Number is not divisible by 5 or 7");
    
        
 return 0;
}