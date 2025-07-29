/*7. Write a program to find sum of 1 to 5 (sum of first 5 numbers) */
#include<stdio.h>
int main(){
    int sum=0;

    for(int i=1; i<=5; i++){
        sum = sum + i;
    }  
    printf("Sum of first five Numbers is : %d",sum);

    return 0;
}