// Accept N numbers and find the maximum number from that number.

#include<stdio.h>
#include<stdlib.h>
#define INVALID -1
int Maximum(int arr[],int iSize)
{
	if ((arr == NULL)||(iSize < 0))
	{
		return INVALID;
	}
	int i = 0,iMax = arr[0];
	for (i = 1;i<iSize;i++)
	{
		if (arr[i] > iMax)
		{
			iMax = arr[i];
		}
	}
	return iMax;
}

int main()
{
	int *arr = NULL;
	int iSize = 0,i = 0,iRet = 0;
	
	printf("Enter number of elements:");
	scanf("%d",&iSize);
	
	arr = (int*)malloc(iSize * sizeof(int));
	if (arr == NULL)
	{
		printf("Unable to allocate the memory.\n");
		return -1;
	}
	printf("Enter Elelments.\n");
	for (i = 0;i < iSize; i++)
	{
		printf("Element %d:",i+1);
		scanf("%d",&arr[i]);
	}
	iRet = Maximum(arr,iSize);
	printf("Maximum number is:%d\n",iRet);
	free(arr);
	return 0;
}