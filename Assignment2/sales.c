/* Write a program to accept quantity and rate for three items, compute the 
total sales amount, Also compute and print the discount as follows: (amount > – 
20% discount, amount between to – 15% discount, amount between – to -- 8 % 
discount) */
#include<stdio.h>
int main(){
    int qt1,qt2,qt3;
    float p1,p2,p3,amt,dis;

    printf("Enter Quantity of three items : ");
    scanf("%d%d%d",&qt1,&qt2,&qt3);
    printf("Enter price for each items : ");
    scanf("%f%f%f",&p1,&p2,&p3);

    amt = (p1*qt1 + p2*qt2 + p3*qt3);

    if(amt>=100000){
        dis = 0.20;
    }
    else if(amt>80000 && amt<100000){
        dis = 0.15;
    }else{
        dis = 0.08;
    }
    printf("\nTotal sales amount is : %.2f",amt);
    printf("\nDiscount is %.2f",(amt*dis));
    printf("\nNet amount after discount : %.2f", amt-(amt*dis));

    return 0;

}