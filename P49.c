/*
Input : 5
Output : A   B   C   D   E
Input : 3
Output : A    B   C
*/
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	char ch = 'A';
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	for (iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch++;
	}
}
int main()
{
	unsigned int iNo = 0;

	printf("Enter a number:");
	scanf("%d",&iNo);
		
	Pattern(iNo);
	return 0;
}