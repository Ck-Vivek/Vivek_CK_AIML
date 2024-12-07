#include <stdio.h>
int main (){
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if (num%2==0){
        printf("% is even number",num);
    }
    else{
        printf("% d is a odd number",num);
    }
    return 0;
}