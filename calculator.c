#include<stdio.h> 
int addition(int num1, int num2) {
    int sum =0;
    sum = num1 + num2;
    return sum;
}
int subtraction (int num1, int num2) {
    int diff = 0;
    diff = num1 - num2;
    return diff;
}
int multiplication (int num1, int num2) {
    int product = 0;
    product = num1*num2;
    return product;
}
int division (int num1, int num2) {
     int div = 0;
     if(num2 == 0) {
        printf("The second number entered is zero.Thus Division cannot be performed.");
     }
     else {
        div = num1/num2;
     }
     return div;
}
int main () {
     int n1,n2;
     printf("Enter two numbers to perform the four basic arithmetic operation :");
     scanf("%d %d",&n1, &n2);
     int add = addition(n1,n2);
     printf("\nThe result of addition is %d",add);
     int sub = subtraction(n1,n2);
     printf("\nThe result of subtraction is  %d",sub);
     int mul = multiplication(n1,n2);
     printf("\nThe result of multiplication is %d",mul);
     int divide = division(n1,n2);     
     printf("\nThe result of division is %d",divide);
     return 0;
}
