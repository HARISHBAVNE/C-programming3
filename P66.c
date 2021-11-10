// Accept N number from user and display that number.

#include<stdio.h>
#include<stdlib.h>

void Dispaly(int *arr,int iLength)
{
	int i = 0;
	printf("Element are.\n");
	for (i = 0;i<iLength;i++)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int *arr = NULL;
	int iLength = 0,i = 0;
	
	printf("Enter number of elements:");
	scanf("%d",&iLength);
	
	arr = (int *)malloc(iLength * sizeof(int));
	printf("Enter the elements.\n");
	for (i = 0;i < iLength;i++)
	{
		printf("Element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	
	Dispaly(arr,iLength);
	free(arr);
	
	return 0;
}