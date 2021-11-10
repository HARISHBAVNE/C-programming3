// Accept N numbers and check 11 is present in that numbers.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define INVALID -1

bool Check(int arr[],int iSize)
{
	if ((arr == NULL)||(iSize < 0))
	{
		return INVALID;
	}
	int i = 0;
	for (i = 0;i<iSize;i++)
	{
		if (arr[i] == 11)
		{
			break;
		}
	}
	if (i == iSize)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int *arr = NULL;
	int iSize = 0,i = 0;
	bool iRet = false;
	
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
	iRet = Check(arr,iSize);
	
	if (iRet == true)
	{
		printf("11 is present.");
	}
	else
	{
		printf("11 is not present.");
	}
	free(arr);
	return 0;
}