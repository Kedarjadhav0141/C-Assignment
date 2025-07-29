/*19. Write a program to find factorial of N (N!).*/
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("Enter N : ");
    scanf("%d",&n);

    if(n<0){
        printf("factorial is not defined for negative numbers ");
        return 1;
    }

    for(int i=2; i<=n; i++){
        fact = fact*i;
    }
    printf("Factorial of %d is : %d",n,fact);

    return 0;
}