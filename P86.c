//Fnd the frequency of whitespace in string
#include<stdio.h>
int Frequecny(char arr[])
{
	int i = 0,iCnt = 0;
	if (str == NULL)
	{
		return 0;
	}
	for (i = 0;arr[i]!='\0';i++)
	{
		if (arr[i] == ' ')
		{
			iCnt ++;
		}
	}
	return iCnt;	
}


int main()
{
	char arr[30];
	int iret = 0;
	
	printf("Enter a string:");
	scanf("%[^'\n']s",&arr);
	
	iret = Frequecny(arr);
	
	printf("White space in string are:%d",iret);
	
	return 0;
}