#include<stdio.h>


void square(int number)
{
	int i =1;
	int res;
	int sum =0;

	for(i = 1; i<=number; i++)
	{
		res = i*i;
		printf("%d-> %d\n",i,res);
		sum = sum + res;
	}
	printf("Sum of all square is %d\n ",sum);
}

int main()
{
	int number= 0;
	int iret =0;
	printf("Enter the number to find square  \n");
	scanf("%d",&number);

	square(number);
	return 0;

}