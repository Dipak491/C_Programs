#include<stdio.h>

//input: 4
// output: 1 2 3 4

void FactorsI(int iNo)
{
	int iCnt = 1;

	while(iCnt<=iNo/2)
	{
		if((iNo % iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
		iCnt++;
	}
	
}


int main()
{
	int iValue =0;
	int iRet = 0;

	printf("Enter thr number of elements: \n");
	scanf("%d",&iValue);

	FactorsI(iValue);
	
	
	return 0;
}


//int iCnt =1;  //auto storage class initalise every time memory 