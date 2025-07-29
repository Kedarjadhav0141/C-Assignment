/*20. Write a program to accept to integers x and n computer x^n.*/
#include<stdio.h>
int main(){
    int x,n,res=1;
    printf("Enter x : ");
    scanf("%d",&x);
    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        res=res*x;
    }
    printf("%d power %d is : %d",x,n,res);
    return 0;
}