// Accept N numbers from user and return the count of Even numbers.

#include<stdio.h>
#include<stdlib.h>
#define INVALID -1
int EvenSum(int arr[],int iSize)
{
	if ((arr == NULL)||(iSize < 0))
	{
		return INVALID;
	}
	int iCnt = 0,i = 0;
	for (i = 0;i<iSize;i++)
	{
		if ((arr[i]%2)==0)
		{
			iCnt++;
		}
	}
	return iCnt;
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
	iRet = EvenSum(arr,iSize);
	
	printf("Number of Even elements are:%d\n",iRet);
	
	free(arr);
	return 0;
}