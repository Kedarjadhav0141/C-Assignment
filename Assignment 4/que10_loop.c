/*10. Write a program to find sum of x to y (both inclusive) */
#include<stdio.h>
int main(){
    int x,y,sum=0;
    printf("Enter x : \n");
    scanf("%d",&x);
    printf("Enter y : \n");
    scanf("%d",&y);

    while (x<=y)
    {
        sum=sum+x;
        x++;
    }
    printf("sum of %d to %d is : %d",x,y,sum);

    return 0;
    
}