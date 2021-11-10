#include<stdio.h>


void Display(char arr[])
{
	int icnt = 0;
	while(arr[icnt] != '\0')
	{
		printf("%c\n",arr[icnt]);
		icnt ++;
	}
}

int main()
{
	char arr[30];
	printf("Enter your name:\n");
	scanf("%[^'\n']s",&arr);
	
	Display1(arr);
	
	return 0;
}