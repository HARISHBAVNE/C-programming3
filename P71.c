// Accept N numbers and one number from user and return the first occurence of that number.

#include<stdio.h>
#include<stdlib.h>
#define INVALID -1
int FirstOccurence(int arr[],int iSize,int iNo)
{
	if ((arr == NULL)||(iSize < 0))
	{
		return INVALID;
	}
	int i = 0;
	for (i = 0;i<iSize;i++)
	{
		if (arr[i] == iNo)
		{
			break;
		}
	}
	if (i == iSize)
	{
		return INVALID;
	}
	else
	{
		return i;	
	}
}

int main()
{
	int *arr = NULL;
	int iSize = 0,iValue = 0,i = 0,iRet = 0;
	
	printf("Enter a number to find the first occurence:");
	scanf("%d",&iValue);
	
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
	iRet = FirstOccurence(arr,iSize,iValue);
	if (iRet == INVALID)
	{
		printf("%d is not present in sequence.",iValue);
	}
	else
	{
		printf("First occurence of %d is at:%d\n",iValue,iRet);
	}
	free(arr);
	return 0;
}