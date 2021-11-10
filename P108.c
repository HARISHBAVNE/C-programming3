// Accept number from user and off the 3rd and 7th bit.
#include<stdio.h>

unsigned int offBit(unsigned int no)
{
	int mask = 0xFFFFFFBB;
	unsigned int result = 0;
	result = no & mask;
	return result;
}

int main()
{
	unsigned int iret = 0;
	unsigned int no = 0;
	printf("Enter a number\n");
	scanf("%u",&no);
	
	iret = offBit(no);
	printf("Modified number is:%u\n",iret);
	return 0;
}