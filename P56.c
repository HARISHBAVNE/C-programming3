/*
    Row = 4
    Column = 4
 
            1       $       $       $
            *       2       $       $
            *       *       3       $
            *       *       *       4

            1,1     1,2     1,3     1,4
 
            2,1     2,2     2,3     2,4
            
            3,1     3,2     3,3     3,4
            
            4,1     4,2     4,3     4,4

 */
#include<stdio.h>
void Pattern(unsigned int iRow,unsigned int iCol)
{
	int i = 0,j = 0;
	if (iRow != iCol)
	{
		return ;
	}
	printf("\n");
	for (i = 1;i <= iRow;i++)
	{
		for (j = 1;j <= iCol;j++)
		{
			if(i==j)
			{
				printf("%d\t",j);
			}
			else if (j <= i)
			{
				printf("*\t");
			}
			else
			{
				printf("$\t");
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