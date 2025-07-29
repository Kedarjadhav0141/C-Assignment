/*25. Write a program to check whether a given number is Armstrong number. */
#include<stdio.h>
#include<math.h>
int main(){
    int n,temp,count=0,armst=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    temp=n;
    while(n>0)
    {
        count++;
        n=n/10;
     }

     n=temp;
     while(n>0){
        int rem =n%10;
        armst = armst + (int)round(pow(rem,count));
        n=n/10;
     }
     if(armst==temp)
     printf("Armstrong number");
     else
     printf("Not Armstrong");
     return 0;

}