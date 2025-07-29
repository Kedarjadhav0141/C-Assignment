/* 12. Write a program to print even numbers from 100 to 150  */
#include<stdio.h>
int main(){
    printf("Even numbers from 100 to 150 :\n");

    for(int i=100; i<=150; i+=2){
        printf("%d\n",i);
    }
    return 0;
}