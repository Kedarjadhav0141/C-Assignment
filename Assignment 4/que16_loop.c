/*16. Write a program to find sum of even numbers from 100 to 200 (or odd numbers) */
#include<stdio.h>
int main(){
    int sum=0;
    
    for(int i=100; i<=200; i+=2){
        sum = sum+i;
    }
    printf("sum of even numbers from 100 to 200 is : %d\n",sum);
    return 0;
}