// Write a program to calculate LCM of two numbers

#include<stdio.h>

int main()
{
    int num1, num2, max, flag=1;
    printf("Enter two positive numbers: \n");
    scanf("%d %d",&num1,&num2);

    max = (num1>num2)?num1:num2;

    while(flag)
    {
        if(max%num1==0 && max%num2==0)
        {
            printf("LCM of %d and %d is %d.",num1,num2,max);
            break;
        }
        ++max;
    }
    return 0;
}