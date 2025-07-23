/*A library charges a fine for every book returned late. Accept the number of 
days the member is late, compute and print the fine as follows:(less than five 
days Rs fine, for 6 to 10 days Rs. Fine and above 10 days Rs. fine )*/
#include<stdio.h>
int main(){
    int days,fine;
    printf("Enter the number of days the menber is late :");
    scanf("%d",&days);

    if(days<=5){
        fine = (days*10);
        printf("fine is %d",fine);
    }
    else if(days>=6 && days<=10){
        fine = (5*10) + ((days-5)*15);
        printf("fine is %d",fine);
    }
    else {
        fine = (5*10) + (5*15) + ((days-10)*20);
        printf("fine is %d",fine);
    }

    return 0;
}