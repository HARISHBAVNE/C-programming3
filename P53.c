// Input :  4   3
// Output :
/*
 
    3	3	3
	3	3	3
	3	3	3
	3	3	3
 
 */
#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i = 0,j = 0;
	printf("\n");
	for (i = 0;i < iRow;i++)
	{
		for (j = 1;j <= iCol;j++)
		{
			printf("%d\t",j);
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