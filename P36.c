/*Accept number from user and one digit to find that digit frequency in number.
inputs = 555264, 5
output = 3
*/
#include<stdio.h>
int Frequency(int iNo,int i)
{
	int iSum = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	if ((i > 9) || (i < 0))
	{
		return 0;
	}
	while(iNo > 0)
	{
		if ((iNo%10)==i)
		{
			iSum ++; 
		}
		iNo = iNo/10;
	}
	return iSum;
}
int main()
{
	int iNo = 0,i = 0, iRet = 0;
	
	printf("Enter a number:");
	scanf("%d",&iNo);
	
	printf("Enter a number to find that frequency:");
	scanf("%d",&i);
	
	iRet = Frequency(iNo,i);
	printf("Frequency of %d is:%d\n",i,iRet);
	
	return 0;
}