 /*Accept a lowercase character from the user and check whether the character 
is a vowel or consonant. (Hint: a,e,i,o,u are vowels)*/
#include<stdio.h>
int main(){
    char ch;

    printf("Enter the lowercase character : ");
    scanf("%c", &ch);

    if(ch>='a' && ch<='z'){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
          printf("It is vowels");
        }else{
            printf("It is constant");
        }
    }else {
        printf("Invalid character enter Lowercase character");
    }

    return 0;
}