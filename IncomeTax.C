#include<stdio.h>

int IncomeTax(int iNo)
{
	int Tax = 0;

	if(iNo <= 500000)
	{
		Tax = 0;
	}
	else if(iNo > 500000)
	{
		Tax =(int) (iNo * 0.2);
	}
	else
	{
		Tax = (int)(iNo * 0.3);
	}
	return Tax;
}

int main()
{
	int ivalue = 0;
	int iRet = 0;
	printf("Enter your income \n");
	scanf("%d",&ivalue);

	iRet = IncomeTax(ivalue);
	printf("Your tax will be : %d",iRet);


	return 0;
}