#include <stdio.h>
int main()
{
    int n;
    printf("enter an integer: ");
    scanf("%d", &n);
    if ((n % 3 == 0) && (n % 5 == 0))
    {
        printf("the enterd integer %d is multiple of 3 and 5", n);
    }
    else
    {
        printf(" the enterd interger %d is not a multiple of 3 and 5",n);
    }
    return 0;
}