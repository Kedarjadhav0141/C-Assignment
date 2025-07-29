/*2. Write a program to print hello N times*/
#include<stdio.h>
int main(){
     
    int n;
    printf("Enter N :\n");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        printf("Hello\n");
    }
}