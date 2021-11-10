// Accept number from user and check 3rd,5th and 7th bits are on or off bit.
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(unsigned int no)
{
	unsigned int imask = 0x00000054;
	unsigned int iResult = 0;
	iResult = imask & no;
	if (iResult == imask)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	bool bret = false;
	unsigned int no = 0;
	printf("Enter a number\n");
	scanf("%u",&no);
	
	bret = CheckBit(no);
	if (bret == true)
	{
		printf("3rd,5Th and 7th bits are on");
	}
	else
	{
		printf("3rd,5Th and 7th bits are off");
	}
	
	return 0;
}