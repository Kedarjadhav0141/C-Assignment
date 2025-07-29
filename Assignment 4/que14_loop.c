/* 14. Write a program to print even numbers from x to y (both inclusive)*/
#include<stdio.h>
int main(){
    int x,y;

    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter y :");
    scanf("%d",&y);
    printf("Even numbers form %d to %d are : \n",x,y);

    while(x<=y){
        if(x%2==0){
            printf("%d\n",x);
        }
        x++;
    }
    return 0;
}