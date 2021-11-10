// Input : ABcD@123
// Output : abCd@123

#include<stdio.h>
void StrToggel(char *str)
{
	if (str == NULL)
	{
		return ;
	}
	while(*str != '\0')
	{
		if ((*str >='A')&&(*str <= 'Z'))
		{
			*str = *str + 32;
		}
		else if ((*str >='a')&&(*str <= 'z'))
		{
			*str = *str - 32;
		}
		str ++;
	}
}
int main()
{
	char arr[30];
	printf("Enter a string:");
	scanf("%[^'\n']s",&arr);
	
	StrToggel(arr);
	printf("Updated string is:%s",arr);
	return 0;
}

 