//find the frequency of string

#include<stdio.h>

int Frequency(char str[])
{
	int iCnt = 0;
	while(*str != '\0')
	{
		if(*str == 'a')
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
	
	iRet = Frequency(arr);
	printf("Frequency of a is:%d\n",iRet);
	
	return 0;
}