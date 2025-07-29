/*15. Write a program to find sum of even numbers from 1 to 10 */
#include<stdio.h>
int main(){
    int sum=0;

    for(int i=2; i<=10; i+=2){
        sum=sum+i;
     }
     printf("sum of even numbers from 1 to 10 is : %d\n",sum);
     return 0;
}