//write a c program to print squreroot number 
#include <stdio.h>
int main (){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        printf("%d \n",i*i);
        
    }
    return 0;
}