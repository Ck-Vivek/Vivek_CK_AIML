#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if ((num<=999&& num>=100) || (num >=-999 && num<=-100))
    { printf("The user enterd %d is a 3 digit number", num);
       }
    else{
        printf("The user enterd %d is a not a 3 digit number", num);
    }
    return 0;
}