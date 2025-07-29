/* 13. Write a program to print even numbers from 1 to N */
#include<stdio.h>
int main(){
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    printf("Even numbers from 1 to N are : \n");

    for(int i=2; i<=n; i+=2){
        printf("%d\n",i);
    }
    return 0;
}