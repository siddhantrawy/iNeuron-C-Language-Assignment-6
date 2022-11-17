// Write a program to check whether a given number is a Prime number or not

#include<stdio.h>

int main()
{
    int num, flag;
    printf("Enter a natural number: ");
    scanf("%d",&num);

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
            flag=1;
            break;
        }     
    }
    if(flag==1)
    {
        printf("%d is not a prime number.",num);
    }
    else
    {
        printf("%d is a prime number.",num);
    }
    return 0;
}