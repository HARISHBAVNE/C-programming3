/*
Input : 5
Output : 1   *   2   *   3   *   4   *   5   *
Input : 3
Output : 1    *   2   *   3   *
*/
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	for (iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("%d * ",iCnt);
	}
}
int main()
{
	unsigned int iNo = 0;
	
	printf("Enter a number:");
	scanf("%d",&iNo);
		
	Pattern(iNo);
	return 0;
}