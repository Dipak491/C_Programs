#include<stdio.h>

int main()
{
    long number = 0;

    printf("enter the number\n");
    scanf("%d",&number);

    if(number%2==0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd number\n");
    }
    return 0;

}