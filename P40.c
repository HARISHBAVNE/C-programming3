/*Accept numbe from user and find the differnce between maximum digit and minimum digit from that number.
Input : 89451
Output : 8   (9-1)
Input : 5672
Output : 5 (7 - 2)
Input : 2222
Output : 0 ( 2 - 2)
*/
#include<stdio.h>
int MaxMin(int iNo)
{
	int iMax = 0,iMin = 9,iDigit = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = (iNo%10);
		if (iDigit < iMin)
		{
			iMin = iDigit;
		}
		if (iDigit > iMax)
		{
			iMax = iDigit;
		}
		iNo = iNo/10;
	}
	return (iMax - iMin);
}
int main()
{
	int iNo = 0, iRet = 0;
	
	printf("Enter a number:");
	scanf("%d",&iNo);
		
	iRet = MaxMin(iNo);
	printf("Differnce is:%d\n",iRet);
	
	return 0;
}