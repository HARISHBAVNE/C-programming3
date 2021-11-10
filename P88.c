// If string contains capital letter then convert it into small letter.

#include<stdio.h>
void ConvertCapital(char *arr)
{
	if (arr == NULL)
	{
		return;
	}
	int i = 0;
	for (i = 0;arr[i]!='\0';i++)
	{
		if ((arr[i] >= 'a')&&(arr[i] <= 'z'))
		{
			arr[i] = arr[i]-32;
		}
	}
}
int main()
{
	char arr[30];
	printf("Enter a string:");
	scanf("%[^'\n']s",&arr);
	
	ConvertCapital(arr);
	printf("Updated string is:%s",arr);
	return 0;
}

 