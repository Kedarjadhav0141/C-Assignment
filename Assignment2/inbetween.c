/* Write a program to accept three numbers and check whether the first is 
between the other two numbers. Ex: Input 20 10 30. Output: 20 is between 10 
and 30 */
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three Numbers : ");
    scanf("%d%d%d", &a, &b, &c);

    if(a>b && a<c || a<b && a>c)
    printf("%d is in between %d and %d", a, b, c);
    else if(b>a && b<c || b<a && b>c)
    printf("%d is in between %d and %d", b, a, c);
    else
    printf("%d is in between %d and %d", c, a, b);

    return 0;
}