#include<stdio.h>

void Display(char *str)
{
	int icnt = 0;
	for (icnt = 0;str[icnt] !='\0';icnt++)
	{
		printf("%c\n",str[icnt]);
	}
}
int main()
{
	char str[30];
	printf("Enter your name:");
	scanf("%[^'\n']s",&str);
	
	Display(str);
	return 0;
}