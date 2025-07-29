// 32. Write a program to print, count and sum of factors
#include<stdio.h>
int main(){
    int n,i,count=0,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        if(n%i==0){
            sum=sum+i;
            count++;
        }
    }
    printf("Sum of factors is : %d\n",sum);
    printf("Count of factors is : %d",count);
    return 0;
}