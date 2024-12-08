#include<stdio.h>
int main (){
    void multiply(int num1,int num2)
    {
        printf("product  of %d & %d is %d \n", num1 ,num2,(num1*num2));
    }
    multiply(10,5);
    multiply(256,56);
    return 0;
}