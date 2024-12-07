//write a c program to print the count of even and odd numbers present within 1 to n 
#include<stdio.h>
int main(){
    int sum=0;
    int num;
    int Even_count=0;
    int Odd_count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (int i=1;i<=num;i++){
        if (i%2==0){
            Even_count++;
        }
        else{
            Odd_count++;
        }
    }
    printf("Even count = %d \n", Even_count);
    printf("Odd count =%d \n",Odd_count);
    return 0;
}