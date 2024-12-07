#include <stdio.h>
int main()
{
    int num1, num2;
    printf("\n Enter first number: ");
    scanf("%d", &num1);
    printf("\n Enter second number: ");
    scanf("%d", &num2);
    if (num1 == num2)
    {
        printf("The user enterd numbers %d,%d are equal",num1,num2);
    }
    else
    {
        printf("The user entered numbers %d,%d are not equal",num1,num2);
    }
    return 0;
}
