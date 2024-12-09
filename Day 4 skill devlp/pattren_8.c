#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j =1;j<=num;j++){
            if(j%2==0){
                printf("* ");
            }
            else{
                printf("%c ",(94+j));
            }
        }
        printf("\n");
    }
    return 0;
}