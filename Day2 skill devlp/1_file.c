#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter a number: ");
    scanf(" %d ", &num);
    for (int i = 1; i <= num; i++)
    {
        printf("%d \n", i);
    }

    return 0;
}