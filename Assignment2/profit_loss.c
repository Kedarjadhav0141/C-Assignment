/* Accept the cost price and selling price from the keyboard. Find out if the 
seller has made a profit or loss and display how much profit or loss has been 
made? */
#include<stdio.h>
int main(){
    float cp,sp,amt;
    printf("Enter a cost price : ");
    scanf("%f",&cp);
    printf("Enter a selling price : ");
    scanf("%f",&sp);

    amt=sp-cp;
    if(sp>cp)
    printf("Profit is %.2f",amt);
    else if(sp<cp)
    printf("Loss is %.2f",amt);
    else
    printf("No Profit No Loss ");

    return 0;
}