/*5. Write a program to print 1 to N */
#include<stdio.h>
int main(){
    int n;
    printf("Enter N : ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        printf("%d\n",i);

    }
    return 0;
}