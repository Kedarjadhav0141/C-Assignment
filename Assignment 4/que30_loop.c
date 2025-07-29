// 30. Write a program to print sum of factors of a given number 
#include<stdio.h>
int main(){
    int n,i,sum=0;

    printf("Enter n : ");
    scanf("%d",&n);

    printf("Factors of %d are : \n",n);
    for(i=1; i<=n; i++){
        if(n%i==0) {
             printf("%d\n",i);
        sum =sum+i;
        }
    }
     printf("Sum of facors is : %d",sum);

    return 0;
}