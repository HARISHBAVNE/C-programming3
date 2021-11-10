//find the length of string

#include<stdio.h>

int StrLength(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		iCnt ++;
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
	
	iRet = StrLength(arr);
	printf("Lenght of string is:%d\n",iRet);
	
	return 0;
}