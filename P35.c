/* Accept number from user and find the differnce between factors and non-factors of that number range.
10
18 - 37          (1 + 2 + 5 + 10)- (3 + 4 + 6 + 7 + 8 + 9)
-19 
*/
#include<stdio.h>
int Difference(int iNo)
{
	int iSum1 = 0,iSum2 = 0,iCnt = 0;
	for (iCnt = 1;iCnt <= iNo;iCnt++)
	{
		if (iNo%iCnt == 0)
		{
			iSum1 = iSum1 + iCnt;
		}
		else
		{
			iSum2 = iSum2 + iCnt;
		}
	}
	printf("%d\n",iSum1);
	printf("%d\n",iSum2);
	return (iSum1 - iSum2);
	
}

int main()
{
	int iNo = 0, iRet = 0;
	
	printf("Enter a number:");
	scanf("%d",&iNo);
	
	iRet = Difference(iNo);
	printf("Difference between odd and even is:%d\n",iRet);
	
	return 0;
}