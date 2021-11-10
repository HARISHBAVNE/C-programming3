/*
input = 4
output = -4   -3  -2  -1  0   1   2   3   4
*/
#include<stdio.h>
void Display(int iNo)
{
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	for (iCnt = -iNo;iCnt <= iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
}
int main()
{
	int iNo = 0;
	
	printf("Enter a number:");
	scanf("%d",&iNo);
		
	Display(iNo);
	return 0;
}