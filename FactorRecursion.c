#include<stdio.h>

//input: 4
// output: 1 2 3 4

void FactorsR(int iNo)
{
	int iCnt = 1;

	if(iCnt<=iNo/2)
	{
		if((iNo % iCnt)==0)
		{
			printf("%d\n",iCnt);
		}
		iCnt++;
		FactorsR(iNo);
	}
	
}


int main()
{
	int iValue =0;
	int iRet = 0;

	printf("Enter thr number of elements: \n");
	scanf("%d",&iValue);

	FactorsR(iValue);
	
	
	return 0;
}


//int iCnt =1;  //auto storage class initalise every time memory 