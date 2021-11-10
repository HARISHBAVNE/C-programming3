#include<stdio.h>


void Display(char *arr)
{
	while(*arr != '\0')
	{
		printf("%c\n",*arr);
		arr ++;
	}
}

int main()
{
	char arr[30];
	printf("Enter your name:\n");
	scanf("%[^'\n']'s",&arr);
	
	Display(arr);
	
	return 0;
}