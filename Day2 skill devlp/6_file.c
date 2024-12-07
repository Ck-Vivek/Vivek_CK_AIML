//write a c program to print summation of even numbers and odd numbers from 1 
#include<stdio.h>
int main(){
    int sum=0;
    int num;
    int Even_count=0;
    int Odd_count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        if(i%2==0)
        {
            Even_count++;
            sum=sum+Even_count;
        }
        else{
            Odd_count++;
            sum=sum+Odd_count;
        }
    }
    printf("sum of even numbers is %d \n",sum,Even_count,sum+Even_count);
    printf("sum of odd numbers is %d \n ", sum,Odd_count,sum+Odd_count);
    return 0;
}
