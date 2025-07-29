/*9. Write a program to find sum of 1 to N (sum of first N numbers) (with and 
without loop) */
#include<stdio.h>
int main(){
    int n,sum=0;

    printf("Enter N : ");
    scanf("%d",&n);

    // sum of first n numbers with loop

    for(int i=1; i<=n; i++){
        sum = sum+i;
    }
    printf("Sum of first N numbers with loop is : %d\n",sum);

    // sum of first n numbers without loop

    int f_sum = n*(n+1)/2;
    printf("Sum of first N numbers with formula is : %d\n",f_sum);

    return 0;
}