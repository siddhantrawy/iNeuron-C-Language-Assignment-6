// Write a program to reverse a given number

#include<stdio.h>

int main()
{
    int num, rem=0, rev=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    printf("Reverse of the number = %d",rev);
    return 0;
}