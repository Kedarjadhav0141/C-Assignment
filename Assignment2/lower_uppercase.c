/*Write a Program to convert lowercase letter into uppercase letter and vice 
versa.*/
#include<stdio.h>
#include<ctype.h>

int main(){
    char ch;
    printf("Enter a letter: ");
    scanf("%c",&ch);
    
    if(isupper(ch)){
        ch = tolower(ch);
        printf("Lowercase: %c\n",ch);
    }
    else if(islower(ch)){
        ch = toupper(ch);
        printf("Upper case: %c\n",ch);
    }
    else{
        printf("Not an alphabet letter.\n");

        return 0;
    }

}

