/* Accept three sides of triangle as input, and print whether the triangle is valid 
or not. (Hint: The triangle is valid if the sum of each of the two sides is greater 
than the third side). */
#include<stdio.h>
int main(){
    float s1,s2,s3;
    
    printf("Enter three sides of triangle : ");
    scanf("%f%f%f",&s1,&s2,&s3);

    if(s1 + s2 > s3 && s2 + s3 > s1 && s3 + s1 > s2){
        printf("Triangle is valid");

    }
    else{
        printf("Triangle is invalid");
    }
    return 0;
}