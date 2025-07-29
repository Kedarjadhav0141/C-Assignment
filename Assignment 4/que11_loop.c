/* 11.Write a program to print even numbers from 1 to 10 (or odd numbers) */
#include<stdio.h>
int main(){
    printf("even numbers from 1 to 10 are :\n");

    for(int i=1; i<=10; i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}
