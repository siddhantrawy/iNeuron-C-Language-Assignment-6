// Write a program to calculate sum of first N even natural numbers

#include<stdio.h>

int main()
{
    int num, sum=0, res=0;
    printf("Enter value of N : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++)
    {
        sum=sum+res;
        res=res+2;
    }
    printf("Sum of first %d even numbers = %d",num,sum);
    return 0;
}