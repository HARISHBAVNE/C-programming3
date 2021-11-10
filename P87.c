// If string contains capital letter then convert it into small letter.

#include<stdio.h>
void ConvertSmall(char arr[])
{
	if (arr == NULL)
	{
		return ;
	}
	while(*arr != '\0')
	{
		if ((*arr >= 'A')&&(*arr <= 'Z'))
		{
			*arr = *arr + 32;
		}
		arr ++;
	}
}

int main()
{
	char arr[30];
	printf("Enter a string:");
	scanf("%[^'\n']s",&arr);
	
	ConvertSmall(arr);
	printf("Updated string is:%s",arr);
	return 0;
}

 