//count the small letters in string

#include<stdio.h>

int CountSmall(char str[])
{
	int iCnt = 0;
	if (str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str >='a')&&(*str <= 'z'))
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
	
	iRet = CountSmall(arr);
	printf("Count of small letters is:%d\n",iRet);
	
	return 0;
}