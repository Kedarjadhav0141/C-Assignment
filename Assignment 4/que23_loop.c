/* 23. Write a program to accept an integer and count the number of even digits, 
odd and zero digits in given number.*/
#include<stdio.h>
int main(){
    int n,o_count=0,e_count=0,z_count=0;
    printf("Enter Number : ");
    scanf("%d",&n);

    if(n<0){
        n=-n;
    }

    if(n==0){
        z_count = 1;
    }

    while(n>0){
        int rem =n%10;
        if(rem%2==0 && rem!=0){
            e_count++;
        }
        else if(rem%2!=0 && rem!=0){
            o_count++;
        }
        else{
            z_count++;
        }
        n=n/10;
    }
    printf("Count of even numbers is : %d\n",e_count);
    printf("Count of odd numbers is : %d\n",o_count);
    printf("Count of zero's  is : %d\n",z_count);
    return 0;
}