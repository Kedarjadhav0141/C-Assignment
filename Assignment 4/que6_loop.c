/*6. Write a program to print x to y (both inclusive) */
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter stsrting point(x) : ");
    scanf("%d",&x);
    printf("Enter ending point(y) : ");
    scanf("%d",&y);

    while(x<=y){
          printf("%d\n",x);
          x++;
    }
    return 0;
    
}