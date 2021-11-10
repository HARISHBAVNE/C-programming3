/*Accept number from user and find the frequency of 2 in number.
inputs = 555264, 2
output = 1
*/
#include<stdio.h>
int Frequency(int iNo)
{
	int iSum = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		if ((iNo%10)==2)
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
	
	
	
	iRet = Frequency(iNo);
	printf("Frequency of 2 is:%d\n",iRet);
	
	return 0;
}