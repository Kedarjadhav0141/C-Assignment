#include<stdio.h>
int main(){
    int x,y,op;
    printf("Enter two numbers : ");
    scanf("%d%d",&x,&y);
    printf("choose an operation : \n");
    printf("1. Check Equality\n");
    printf("2. Check if x < y\n");
    printf("3. Division (quotient and remainder)\n");
    printf("4. Check if a number is between x and y\n");
    printf("5. Swap x and y\n");
    printf("\n Enter your choice(1-5)");
    scanf("%d",&op);
    

    switch(op){
        case 1 : if(x==y){
            printf("\nx is equal to y");
        }else{
            printf("\nNot equal");
        }
        break;
        case 2 : if(x<y){
            printf("\nx is less than y");
        }else{
            printf("\nx is not less than y");
        }
        break;
        case 3 :{
            if(y==0){
            printf("\nerror : division by zero is not possible");
        }  else {
              int quotient=x/y;
              int remainder=x%y;
           printf("\nquotient = %d",quotient);
           printf("\nremainder = %d",remainder);
        }
        break;
    }
        case 4 : {
                 int n;
                 printf("\nEnter a number : ");
                 scanf("%d",&n);
                 if((n>x && n<y ) || (n>y && n<x)){
                    printf("\n%d  is in between x and y",n);
                 }else{
                    printf("\n%d is not between x and y");
                 }
        break;
                }
        case 5 : x=x+y;
                 y=x-y;
                 x=x-y;
                printf("\nAfter swapping: x = %d, y = %d\n", x, y);
        break;
        default : printf("\nInvalid operation");  
                    
    }
    return 0;
}