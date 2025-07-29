/*8. Write a program to find sum of 100 to 150 */
#include<stdio.h>
int main(){
    int sum=0;

    for(int i=100; i<=150; i++){
        sum = sum + i;
    }
    printf("sum of 100 to 150 : %d",sum);

    return 0;
}