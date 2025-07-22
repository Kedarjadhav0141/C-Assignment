/*Write a program to find maximum of three numbers? (3-4 logics) and (with 
conditional operator). Modify and find minimum of three numbers.*/
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&n1,&n2,&n3);

// first logic
   /* if(n1>=n2 && n1>=n3){
        printf("First number is greater");
    }
    else if(n2>=n1 && n2>=n3){
        printf("second number is greater");
    }
    else{
        printf("Third number is greater");
    }
    */

// second logic

/*if(n1>n2){
    if(n1>n3){
        printf("First number is greater");
    }else{
        printf("Third number is greater");
    }
    } else {
         if(n2>n3){
            printf("Second number is greater");
    }else {
        printf("Third number is greater");
    }
}
*/

//  Third logic

/*n2=(n1>n2)?n1:n2;
n2=(n3>n2)?n3:n2;

printf("%d is greater ",n2);
*/


// using third logic to find minimum of three numbers

n2=(n1<n2)?n1:n2;
n2=(n3<n2)?n3:n2;

printf("%d is minimum number",n2);
return 0; 
}