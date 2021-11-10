//find the count the capital letters string

#include<stdio.h>

int CountCapital(char str[])
{
	int iCnt = 0;
	if (str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str >='A')&&(*str <= 'Z'))
		{
			iCnt ++;
		}
		str ++;
	}
	return iCnt;
}
int main()
{
	int iRet = 0;
	char arr[30];
	printf("Enter a string:");
	scanf("%[^'\n']s",&arr);
	
	iRet = CountCapital(arr);
	printf("Count of capital letters is:%d\n",iRet);
	
	return 0;
}