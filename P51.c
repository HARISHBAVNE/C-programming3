// Input :  4   3
// Output :
/*
 
    *   *   *
    *   *   *
    *   *   *
 
 */
#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i = 0,j = 0;
	printf("\n");
	for (i = 0;i < iRow;i++)
	{
		for (j = 0;j < iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	unsigned int iRow = 0,iCol = 0;

	printf("Enter a number of Rows:");
	scanf("%d",&iRow);
	
	printf("Enter a number of Columns:");
	scanf("%d",&iCol);
		
	Pattern(iRow,iCol);
	return 0;
}