// Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>

int main()
{
    int num, sum=0;
    printf("Enter value of N : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++)
    {
        sum=sum+(i*i*i);
    }
    printf("Sum of cube of first %d natural numbers = %d",num,sum);
    return 0;
}