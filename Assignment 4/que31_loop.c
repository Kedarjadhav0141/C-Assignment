// 31. Write a program to count factors of a given number 
#include<stdio.h>
int main(){
    int i,n,count=0;
    printf("Enter a N : ");
    scanf("%d",&n);

    printf("Factors of %d are : ",n);
    for(i=1; i<=n; i++){
        if(n%i==0){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nCount of Factors is : %d",count);

    return 0;
}