// Accept two numbers from user and resturn addition of number in between that range.
//input: 3, 6
//output :18

#include<stdio.h>
#define INVALID -1 
int Addition(int iStart,int iEnd)
{
	int iSum = 0,iCnt = 0;
	if (iStart >= iEnd)
	{
		return INVALID;
	}
	else
	{
		for (iCnt = iStart;iCnt <=iEnd;iCnt++)
		{
			iSum = iSum + iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iStart = 0,iEnd = 0,iRet = 0;

	printf("Enter a Start number:");
	scanf("%d",&iStart);
	
	printf("Enter a End Number:");
	scanf("%d",&iEnd);
		
	iRet = Addition(iStart,iEnd);
	if (iRet == INVALID)
	{
		printf("Ivalid range\n");
	}
	else
	{
		printf("Addition is:%d\n",iRet);
	}
	
	return 0;
}