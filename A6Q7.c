// Write a program to count digits in a given number

#include<stdio.h>

// int main()
// {
//     int num;
//     int count=0;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     int div=num;

//     do
//     {
//         num=num/10;
//         count++;
//     } while(num != 0);

//     printf("Number of digits in %d = %d",div, count);
    
//     return 0;
// }



int main()
{
    int num;
    int count=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int div=num;

    for(int i=0; num!=0; i++)
    {
        num=num/10;
        count++;
    }

    printf("Number of digits in %d = %d",div, count);
    return 0;
}


    