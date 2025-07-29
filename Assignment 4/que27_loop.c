// 27. Write a program to check whether given number if palindrome number.
#include<stdio.h>
int main (){
    int n,rev=0,temp;

    printf("Entetr N : ");
    scanf("%d",&n);

    temp=n;

    while(n>0){
        int rem = n%10;
        rev = rev*10+rem;
        n=n/10;
    }
    if(rev==temp)
    printf("Number is Palindrome ");
    else 
    printf("Not Palindrome");
    
    return 0;
}