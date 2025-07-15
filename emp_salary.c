/*The basic salary of an employee is decided at the time of employment, which
may be different for different employees. Apart from basic, employee gets 10%
of basic as house rent, 30% of basic as dearness allowance. A professional tax of
5% of basic is deducted from salary. Accept the employee id and basic salary for
an employee and output the take home salary of the employee.*/
#include<stdio.h>
int main(){
    int id;
    float bs,hra,da,tax,totalsal;

    printf("Enter your ID : ");
    scanf("%d",&id);
    printf("Enter your Basic salary : ");
    scanf("%f",&bs);

    hra = 0.10*bs;
    da = 0.30*bs;
    tax = 0.05*bs;

    totalsal = bs+hra+da-tax;

    printf("\n-----------SALARY DETAILS----------");
    printf("\nEmployee ID          : %d",id);
    printf("\nBasic Salary         : %.2f",bs);
    printf("\nHouse rent allowance : %.2f",hra);
    printf("\nDress allowance      : %.2f",da);
    printf("\nTax                  : %.2f",tax);
    printf("\nTotal salary         : %.2f",totalsal);

}