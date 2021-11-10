
/*
    1. Create staic character array in main function
    2. Accept the string into that array
    3. Pass that string to the function
    4. Function will perform the operation on that string
 */
 #include<stdio.h>
 
 void Dispaly(char *arr)
 (
	while(*arr != '\0')
	{
		printf("%c",*arr);
		arr ++;
	}
	
 )
 int main()
 {
	char arr[30];
	int i = 0;
	printf("Enter a string\n");
	scanf("%[^'\n']'s",&arr);
	
	Dispaly(arr);
	return 0;
	
 }