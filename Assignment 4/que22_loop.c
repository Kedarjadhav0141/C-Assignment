/*22. Write a program that accepts a number and count the number of digits in given number. */
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    if(n<0){
        n=-n;
    }

    if(n==0){
        count = 1;
    }

    while(n>0){
        count++;
        n=n/10;
    }
    printf("count is : %d",count);
    return 0;
}