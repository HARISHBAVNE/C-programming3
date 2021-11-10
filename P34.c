// Accept number from user and return the smallest digit
// Input : 7526
// Output : 2
// Input : 101
// Output : 0
// Input : 58902
// Output : 0

#include<stdio.h>

typedef unsigned long int ULONG;
int Smallest(ULONG iNo)
{
	int inum = 9,iDigit = 0;
	if (iNo < 0)
	{
		iNo = -iNo;
	}
	while(iNo > 0)
	{
		iDigit = iNo%10;
		if (iDigit < inum)
		{
			inum = iDigit;
			if(inum == 0)
			{
				break;
			}
		}
		iNo = iNo/10;
		
	}
	return  inum;
}


int main()
{
	ULONG iNo = 0;
	int iret = 0;
	printf("Enter a number:");
	scanf("%d",&iNo);
	
	iret = Smallest(iNo);
	
	printf("Smallest digit from number %d is:%d\n",iNo,iret);
	
	return 0;
}