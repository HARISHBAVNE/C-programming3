// Display binary digits
#include<stdio.h>

void DisplayBinary(unsigned int no)
{
	unsigned int Digit = 0;
	while(no!=0)
	{
		Digit = no%2;
		printf("%u ",Digit);
		no = no/2;
	}
}

int main()
{
	unsigned int no = 0;
	printf("Enter a number\n");
	scanf("%u",&no);
	
	DisplayBinary(no);
	return 0;
}