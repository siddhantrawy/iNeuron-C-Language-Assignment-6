// Write a program to calculate sum of first N natural numbers

#include<stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter value of N : ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        sum=sum+i;
    }
    printf("Sum of first %d natural number = %d",num,sum);
    return 0;
}