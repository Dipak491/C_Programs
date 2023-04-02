#include<stdio.h>

int X = 11;
extern int Y;
extern double d;

int main()
{
    printf("Value of X : %d\n",X);
    printf("Value of Y :%d\n",Y);
    printf("VAlue of d : %f\n",d);
    return 0;
}
