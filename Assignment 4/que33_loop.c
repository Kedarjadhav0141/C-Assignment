// 33. Write a program to check whether a given number is perfect number. 
#include<stdio.h>
int main(){
    int n,i,result=0,temp;
    printf("Enter a Number : ");
    scanf("%d",&n);

    temp=n;
    for(i=1; i<n; i++){
        if(n%i==0){
            result=result+i;
        }
    }
    if(result==temp){
        printf("Perfect Number");
    } else {
        printf("Not perfect Number");
    }
    return 0;

}