// Accept number and position of bit from user and togel that bit.
#include<stdio.h>

unsigned int togelbit(unsigned int no,int pos)
{
	unsigned int imask = 0x00000001;
	unsigned int iResult = 0;
	
	if ((pos < 1)||(pos>32))
	{
		return 0;
	}
	
	imask = imask << (pos-1);
	iResult = imask ^ no;
	
	return iResult;
}

int main()
{
	unsigned int Ret = 0;
	int pos = 0;
	unsigned int no = 0;
	printf("Enter a number\n");
	scanf("%u",&no);
	
	printf("Enter bit position:");
	scanf("%d",&pos);
	
	Ret = togelbit(no,pos);
	printf("Updated number is:%u",Ret);
	
	return 0;
}