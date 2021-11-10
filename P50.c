/*
Input : 5
Output : A   B   C   D   E
Input : 3
Output : A    B   C
*/
#include<stdio.h>
void Pattern(unsigned int iNo)
{
	char ch = '\0';
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	printf("\n");
	for (iCnt = 1,ch = 'A';iCnt <= iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}
int main()
{
	unsigned int iNo = 0;

	printf("Enter a number:");
	scanf("%d",&iNo);
		
	Pattern(iNo);
	return 0;
}