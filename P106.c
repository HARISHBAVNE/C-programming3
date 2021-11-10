// Count the number of on bits.
#include<stdio.h>

int CountOne(unsigned int no)
{
	int icnt = 0;
	while(no!=0)
	{
		
		icnt += (no%2);
		no = no/2;
	}
	return icnt;
}

int main()
{
	int iret = 0;
	unsigned int no = 0;
	printf("Enter a number\n");
	scanf("%u",&no);
	
	iret = CountOne(no);
	printf("number of on bits are:%d\n",iret);
	return 0;
}