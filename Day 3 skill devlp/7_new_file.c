// write a c program to implement a basic calculator using function
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter a number : ");
    scanf("%d",&num1);
    printf("Enter another number : ");
    scanf("%d",&num2);
    void Calculate (int x,int y)
    {
        printf("Sum: %d \n",(x+y));
        printf("Subtraction: %d \n",(x-y));
        printf("Multiplication: %d \n",(x*y));
        printf("Quotient: %d \n",(x%y));
    }
    Calculate(num1,num2);
    return 0;
}