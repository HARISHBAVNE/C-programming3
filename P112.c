// Accept number and position of bit from user and check that bit is on or off bit.
#include<stdio.h>
#include<stdbool.h>
bool CheckBit(unsigned int no,int pos)
{
	unsigned int imask = 0x00000001;
	unsigned int iResult = 0;
	
	if ((pos < 1)||(pos>32))
	{
		return false;
	}
	
	imask = imask << (pos-1);
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
	int pos = 0;
	unsigned int no = 0;
	printf("Enter a number\n");
	scanf("%u",&no);
	
	printf("Enter bit position:");
	scanf("%d",&pos);
	
	bret = CheckBit(no,pos);
	if (bret == true)
	{
		printf("bits is on");
	}
	else
	{
		printf("bit is off");
	}
	
	return 0;
}