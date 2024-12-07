#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >=-9&&num <=9)
    {
        printf("The user enterd %d is a  digit", num);
    }
    else{
        printf("The user enterd %d is a number", num);
    }
    return 0;
}