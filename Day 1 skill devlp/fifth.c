#include <stdio.h>
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    if (age>=18 && age<=100){
        printf("you are eligible for voting");
    }
    else{
        printf("you are not eligible for voting");
    }
    return 0;
}