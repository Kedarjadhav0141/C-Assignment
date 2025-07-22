/*Write a program to accept marks for three subjects and find the total marks 
secured , average and also display the class obtained. (Class I – above %, class 
II – % to %, pass class – % to % and fail otherwise) */
#include<stdio.h>
int main(){
    float m1,m2,m3,total,avg;
    printf("Enter marks of subject1");
    scanf("%f",&m1);
    printf("Enter marks of subject2");
    scanf("%f",&m2);
    printf("Enter marks of subject3");
    scanf("%f",&m3);

    total = m1 + m2 + m3;
    avg = total/3;

    if(avg>=80){
        printf("First class");
    }
    else if(avg<80 && avg>=60){
        printf("second class");
    }
    else if(avg<60 && avg>=40){
        printf("Pass");
    }
    else{
        printf("Fail");
    }

    printf("\nTotal marks obtained is : %.2f",total);
    printf("\nAverage is : %.2f",avg);

}