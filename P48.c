/*
Input : 5    A
Output : A   A   A   A   A
Input : 3    F
Output : F    F   F
*/
#include<stdio.h>
void Pattern(unsigned int iNo,char ch)
{
	int iCnt = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	for (iCnt = 1;iCnt <= iNo;iCnt++)
	{
		printf("%c\t",ch);
	}
}
int main()
{
	unsigned int iNo = 0;
	char ch = '\0';
	printf("Enter a number:");
	scanf("%d",&iNo);
	printf("Enter a character:");
	scanf(" %c",&ch);
		
	Pattern(iNo,ch);
	return 0;
}