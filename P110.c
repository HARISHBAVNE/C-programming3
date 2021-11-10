// Accept number from user and check third bit is on or off bit.
#include<stdio.h>
#include<stdbool.h>
bool OnBit(unsigned int no)
{
	unsigned int imask = 0x00000010;
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
	
	bret = OnBit(no);
	if (bret == true)
	{
		printf("5Th bit is on");
	}
	else
	{
		printf("5Th bit is off");
	}
	
	return 0;
}