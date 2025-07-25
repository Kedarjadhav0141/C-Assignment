/*Write a program, which accepts two integers and an operator as a character (+ - * /), performs the corresponding operation and displays the result.*/
#include<stdio.h>
int main(){
    int a,b;
    char ch;

    printf("Enter a expression : ");
    scanf("%d %c %d",&a,&ch,&b);

     switch(ch){
        case '+' : 
        printf("addition is : %d", (a+b));
        break;
        case '-' : 
        printf("substraction is : %d", (a-b));
        break;
        case '*' : 
        printf("multiplication is : %d", (a*b));
        break;
        case '/' : 
        printf("division is : %d", (a/b));
        break;
        default : 
        printf("Invalid operator");
    }
    return 0;
}