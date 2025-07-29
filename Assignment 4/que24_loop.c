/*Write a program to find sum of digits of given number.*/
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a Number : ");
    scanf("%d",&n);

    while(n>0){
        int rem = n%10;
        sum = sum + rem;
        n=n/10;
    }
    printf("sum of digits of given number is : %d",sum);
    return 0;
}