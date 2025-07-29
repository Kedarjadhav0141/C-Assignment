/*17. Write a program to find sum of even numbers from 1 to N */
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter N :");
    scanf("%d",&n);

    for(int i=2; i<=n; i+=2){
        sum = sum+i;
    }
    printf("sum of even number from 1 to %d is  : %d\n",n,sum);
    return 0;
}