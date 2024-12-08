//wa c program to print ,multiplication table of n using function by taking dyanamic input from user


#include<stdio.h>
void MultiplicationTable(int n) {
    for(int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    MultiplicationTable(n);
    return 0;
}