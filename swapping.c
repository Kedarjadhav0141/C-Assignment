/*Accept two integers from the user and interchange them. Display the
interchanged numbers. Using temporary variable Without using temporary
variable
a. Using + and – operator
b. Using / and * operator */

// Swapping using temporary variable

/*#include<stdio.h>
  int main(){
    int a,b,temp;

    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping \n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);

} */

// without using temporary variable a] using + and - operator

#include<stdio.h>
int main(){
    int a,b;

    printf("Enter A : ");
    scanf("%d",&a);
    printf("Enter B : ");
    scanf("%d",&b);

   /* a = a+b;
      b = a-b;
      a = a-b; */

      // without using temporary variable b] using / and * operator

      if(a !=0 && b !=0){
      a = a*b;
      b = a/b;
      a = a/b;

    printf("After Swapping without temporary variable \n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
      }else{
        printf("swapping using * and / not allowed when either number is 0.\n");
      }

}
