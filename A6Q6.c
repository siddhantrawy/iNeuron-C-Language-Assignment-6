// Write a program to calculate factorial of a number

#include<stdio.h>

int main()
{
    int num, fact=1;
    printf("Enter a number for which you want to calculate factorial : ");
    scanf("%d",&num);

    for(int i=1; i<=num; i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d = %d",num,fact);
    return 0;
}