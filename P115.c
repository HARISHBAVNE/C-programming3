// Accept number from user and on that bit. 

#include<stdio.h>
#include<stdbool.h>
unsigned int ChangekBit(unsigned int no,int pos)
{
	unsigned int imask = 0x00000001;
	unsigned int iResult = 0;
	
	if ((pos < 1)||(pos>32))
	{
		return false;
	}
	
	imask = imask << (pos-1);
	iResult = imask | no;

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
	
	Ret = ChangekBit(no,pos);
	printf("modified number id:%u",Ret);
	
	return 0;
}