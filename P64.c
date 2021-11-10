/*
    Row = 4
    Column = 4
 
            *       *       *       *
            *       *       *
            *       *
            *
            41      42      43      44
 
            31      32      33      34
 
            21      22      23      24
            
            11      12      13      14
 */

#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i = 0,j = 0;
	if (iRow != iCol)
	{
		return ;
	}
	char ch = '\0';
	printf("\n");
	for (i = iRow;i >=1;i--)
	{
		
		for (j = 1;j <=i;j++)
		{
			if(i >= j)
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	unsigned int iRow = 0,iCol = 0;

	printf("Enter a number of Rows:");
	scanf("%u",&iRow);
	
	printf("Enter a number of Columns:");
	scanf("%u",&iCol);
		
	Pattern(iRow,iCol);
	return 0;
}