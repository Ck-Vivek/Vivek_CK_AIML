#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j =1;j<=i;j++){
            if(i%2==0){
                printf("0 ");
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }
    return 0;
}