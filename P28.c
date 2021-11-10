// Accept number from user and check whether that number is pallindrom or not
// Input : 7521
// Output : False
// Input : 121
// Output : True
// Input : 75057
// Output : True



#include<stdio.h>
#include<stdbool.h>
bool Pallindrom(int no)
{
	int rev = 0,temp = no;
	if (no < 0)
	{
		no = -no;
	}
	for (;no > 0;no = no/10)
	{
		rev = (rev * 10)+(no%10);
	}
	if (rev == temp)
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
	int no = 0;
	bool bRet = false;
	printf("Enter a number:\n");
	scanf("%d",&no);	
	bRet = Pallindrom(no);
	
	if (bRet == true)
	{
		printf("Number is Pallindrom.\n");
	}
	else
	{
		printf("Not Pallindrom.\n");
	}
	
	return 0;
}