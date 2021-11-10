/*Accept numbe from user and find frequency of digits in range 3 to 7.
input = 78953
output = 1
input = 94563
output = 3
*/
#include<stdio.h>
int Frequency(int iNo)
{
	int iCnt = 0,iDigit = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	for(;iNo > 0;iNo = iNo/10)
	{
		iDigit = (iNo%10);
		if ((iDigit > 3) && (iDigit < 7))
		{
			iCnt ++;
		}
	}
	return iCnt;
}
int main()
{
	int iNo = 0;
	
	printf("Enter a number:");
	scanf("%d",&iNo);
		
	iRet = Frequency(iNo);
	printf("Frequency is:%d\n",iRet);
	
	return 0;
}