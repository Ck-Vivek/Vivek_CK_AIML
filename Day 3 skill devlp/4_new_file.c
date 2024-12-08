#include<stdio.h>
int main (){
    void sub(int num1,int num2)
    {
        printf("Subtraction of %d & %d is %d \n", num1 ,num2,(num1-num2));
    }
    sub(10,5);
    sub(256,56);
    return 0;
}