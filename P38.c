/*Accept number from user and display its factors.
input = 10
output = 1,2,5
*/
#include<stdio.h>
void Factors(int iNo)
{
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	printf("Factors of %d are\n",iNo);
	for (iCnt = 1;iCnt <= (iNo/2);iCnt++)
	{
		if ((iNo%iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}
}
int main()
{
	int iNo = 0, iRet = 0;
	
	printf("Enter a number:");
	scanf("%d",&iNo);
		
	Factors(iNo);
	return 0;
}