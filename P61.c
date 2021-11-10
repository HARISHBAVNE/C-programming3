/*
    Row = 4
    Column = 4
 
            
            A
 
            B        B
 
            C        C        C
            
            D        D        D       D
 
 
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
	char ch = '\0';
	printf("\n");
	for (i = 1,ch = 'A';i <= iRow;i++,ch++)
	{
		
		for (j = 1;j <= iCol;j++)
		{
			if(i >= j)
			{
				printf("%c\t",ch);
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