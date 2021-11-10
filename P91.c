// input = GOOD
// output = GOD

#include<stdio.h>

void Remove(char arr[],char brr[])
{
	while(*arr != '\0')
	{
		if (*arr != *(arr+1))
		{
			*brr = *arr;
			brr++;
		}
		arr++;
		
	}
	*brr = '\0';
	
}

int main()
{
	char arr[10];
	char brr[10];
	printf("Enter a string\n");
	scanf("%[^'\n']s",arr);
	Remove(arr,brr);
	printf(brr);
}