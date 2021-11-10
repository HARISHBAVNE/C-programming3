// Accept N number from user and display Even numbers only.

#include<stdio.h>
#include<stdlib.h>

void DispalyEven(int *arr,int iLength)
{
	if ((arr == NULL) || (iLength < 0))
	{
		return;
	}
	int i = 0;
	printf("Even Elements are.\n");
	for (i = 0;i<iLength;i++)
	{
		if ((arr[i]%2)==0)
		{
			printf("%d\t",arr[i]);
		}
	}
}
int main()
{
	int *arr = NULL;
	int iLength = 0,i = 0;
	
	printf("Enter number of elements:");
	scanf("%d",&iLength);
	
	arr = (int *)malloc(iLength * sizeof(int));
	
	if (arr == NULL)
	{
		printf("Unable to allocate the memory.\n");
		return -1;
	}
	printf("Enter the elements.\n");
	for (i = 0;i < iLength;i++)
	{
		printf("Element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	DispalyEven(arr,iLength);
	
	free(arr);
	
	return 0;
}