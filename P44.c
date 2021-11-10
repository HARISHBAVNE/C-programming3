/*
Input : 5
Output : *   *   *   *   *
Input : 9
Output : *    *   *   *   *   *   *   *   *
*/
#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	for (iCnt = 0;iCnt < iNo;iCnt++)
	{
		printf("*\t");
	}
}
int main()
{
	int iNo = 0;
	
	printf("Enter a number:");
	scanf("%d",&iNo);
		
	Pattern(iNo);
	return 0;
}