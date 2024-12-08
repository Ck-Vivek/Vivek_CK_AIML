#include<stdio.h>
int main (){
    void division(int num1,int num2)
    {
        printf("remainder  of %d & %d is %d \n", num1 ,num2,(num1%num2));
        printf("quotient  of %d & %d is %d \n", num1 ,num2,(num1/num2));
    }
    division(40,5);
    division(10,2);
    return 0;
}