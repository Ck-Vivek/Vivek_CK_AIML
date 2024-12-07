#include <stdio.h>
int main(){
    int month;
    printf("Enter the month number: ");
    scanf("%d", &month);
    if (month>=1 && month<=12)
    {
        printf("%d is a valid month number", month);
    }
    else {
        printf("%d is not a valid month number",month);
    }
    return 0;
}