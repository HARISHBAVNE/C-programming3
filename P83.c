//find the frequency of A and a string

#include<stdio.h>

int Frequency(char str[])
{
	int iCnt = 0;
	if (str == NULL)
	{
		return 0;
	}
	while(*str != '\0')
	{
		if((*str == 'a')||(*str == 'A'))
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
	printf("Frequency is:%d\n",iRet);
	
	return 0;
}