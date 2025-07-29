// 26.  Write a program to find reverse of given number.
#include<stdio.h>
int main(){
    int n,rev=0;
    printf("Enter N : ");
    scanf("%d",&n);

    while(n>0){
        int rem=n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    printf("%d",rev);
    return 0;
}