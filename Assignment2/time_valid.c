/* Accept the time as hour, minute and seconds and check whether the time is 
valid. (Hint:0<=hour<24, 0<=minute <60, 0<=second <60) */
#include<stdio.h>
int main(){
    int hr, min, sec;

    printf("Enter hours");
    scanf("%d",&hr);
    printf("Enter minutes");
    scanf("%d",&min);
    printf("Enter seconds");
    scanf("%d",&sec);
/*
    if(hr>=0 && hr<24){
        if(min>=0 && min<60){
            if(sec>=0 && sec<60){
                printf("Time is valid");
            }else
                printf("seconds are in valid");
        }else 
            printf("minutes are invalid");
    }else
       printf("Hours are in valid");
*/

// usig ternary operator

(hr>=0 && hr<24 && min>=0 && min<60 && sec>=0 && sec<60)?printf("Time is valid") : printf("Time is not valid");
return 0;
}