#include<stdio.h>

//input: 4
// output: 1 2 3 4

void DisplayR(int iNo)
{
	
	if(iNo != 0)
	{
	
		printf("%d\t",iNo%10);
		iNo = iNo /10;

		DisplayR(iNo)
	}
}


int main()
{
	int iValue =0;

	printf("Enter thr number of elements: \n");
	scanf("%d",&iValue);

	DisplayR(iValue);
	printf("End of main\n");
	
	return 0;
}


//int iCnt =1;  //auto storage class initalise every time memory 