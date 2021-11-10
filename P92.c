// input = GOOD
// output = GOD

#include<stdio.h>

void Remove(char arr[])
{
	char *brr = arr;
	
	while(*brr != '\0')
	{
		if (*brr != *(brr+1))
		{
			*arr = *brr;
			arr++;
		}
		brr++;
		
	}
	*arr = '\0';
	
}

int main()
{
	char arr[10];
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	
	Remove(arr);
	printf(arr);
	
	
}