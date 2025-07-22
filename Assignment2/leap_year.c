/*Accept any year as input through the keyboard. Write a program to check 
whether the year isa leap year or not.*/
#include<stdio.h>
int main(){
    int year;

    printf("Enter a Year : ");
    scanf("%d",&year);

    
    if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))){
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
return 0; 
}