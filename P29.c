// Accept number from user and return the largest digit
// Input : 7521
// Output : 7
// Input : 121
// Output : 2
// Input : 56892
// Output : 9



#include<stdio.h>
#include<stdbool.h>
int Maximum(int no)
{
	int Max = 0,temp = no;
	if (no < 0)
	{
		no = -no;
	}
	while(no > 0)
	{
		if ((no%10) > Max)
		{
			Max = no%10;
		}
		no = no/10;
	}
	return Max;
}

int main()
{
	int no = 0;
	int iRet = 0;
	printf("Enter a number:\n");
	scanf("%d",&no);	
	iRet = Maximum(no);
	
	printf("Maximum digit is:%d",iRet);
	
	return 0;
}