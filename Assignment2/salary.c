/* Write a program, which accepts annual basic salary of an employee and 
calculates and displays the Income tax as per the following rules 
1. Basic: < 1,50,000 Tax = 0 
2. 1,50,000 to 3,00,000 Tax = 20% 
3. > 3,00,000 Tax = 30% */
#include<stdio.h>
int main(){
    float bsal,tax;

    printf("Enter Basic salary : ");
    scanf("%f",&bsal);

    if(bsal<150000){
        tax=0;
    }
    else if(bsal<=300000){
        tax=(bsal-150000) * 0.20;
    }
    else {
        tax=(150000 * 0.20) +((bsal-300000)*0.30);
    }

    printf("incom tax is : %.2f",tax);

return 0;
}
