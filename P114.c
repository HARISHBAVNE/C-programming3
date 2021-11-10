// Accept number and positions of bit from user and check that bits are on or off.
#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int no,int pos1,int pos2)
{
	unsigned int imask1 = 0x00000001;
	unsigned int imask2 = 0x00000001;
	unsigned int imask;
	
	unsigned int iResult = 0;
	
	if (((pos1 < 1)||(pos1>32))||((pos2 < 1)||(pos2>32)))
	{
		return false;
	}
	
	imask1 = imask1 << (pos1-1);
	imask2 = imask2 << (pos2-1);
	imask = imask1 | imask2;
	
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
	bool Ret = false;
	int pos1 = 0,pos2 = 0;
	unsigned int no = 0;
	printf("Enter a number\n");
	scanf("%u",&no);
	
	printf("Enter bit position:");
	scanf("%d",&pos1);
	
	printf("Enter bit position:");
	scanf("%d",&pos2);
	
	Ret = CheckBit(no,pos1,pos2);
	if (Ret == true)
	{
		printf("Bits are on");
	}
	else
	{
		printf("Bits are off.");
	}
	
	return 0;
}