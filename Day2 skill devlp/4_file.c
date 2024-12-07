#include <stdio.h>
int main(){
    int sum,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        sum=sum+i;
    }
    printf("%d is summation of 1 to %d \n", sum,num);
    return 0;
}