// 34. Write a program to check whether a given number is prime number. 
#include<stdio.h>
int main(){
    int n,i,count=0;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        printf("Number is prime number");
    } else {
        printf("Number is Not Prime Number");
    }
    return 0;
}