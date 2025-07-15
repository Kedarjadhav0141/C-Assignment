/*A cashier has currency notes of denomination 1, 5 and 10. Accept the amount to
be withdrawn from the user and print the total number of currency notes of each
denomination the cashier will have to give.*/
#include<stdio.h>
int main(){
    int amt,tens,fives,ones;

    printf("Enter the Amount to withdraw : ");
    scanf("%d",&amt);

    tens = amt/10;
    amt = amt%10;
    fives = amt/5;
    amt = amt%5;
    ones = amt;

   printf("Number of 10rs notes : %d\n",tens);
   printf("Number of 5rs notes : %d\n",fives);
   printf("Number of 1rs notes : %d\n",ones);

   return 0;
}