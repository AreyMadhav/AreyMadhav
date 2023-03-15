#include<stdio.h>

int Maximum(int arr[],int n);

int main()
{
	int i,arr[10],size,index;
	printf("\n Enter the size of array: ");
	scanf("%d",&size);

	printf("\n Enter array elements: ");

	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	index=Maximum(arr,size);
	printf("\n The maximum number %d is present at %d th location in the given array. \n \n",arr[index],index+1);
	return 0;
}

int Maximum(int arr[],int n)
{
	int i,max,index;
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(max<arr[i])
		{
		max=arr[i];
		index=i;
		}
	}
	return index;
}
