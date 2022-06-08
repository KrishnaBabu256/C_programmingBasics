// prog to sort array using bubble sort
#include<stdio.h>
void bubbleSort(int*,int);
int main ()
{
	// take input from the usr
	int  n;
	printf("enter the number of numbers\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d numbers",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	// function call
	bubbleSort(arr,n);
	
	return 0;
}
// bubble sort logic
void bubbleSort(int* arr,int n)
{
	int i,j,temp;
	// travel till last  one elemnet
	for(i=0;i<n-1;i++)
	{	
		// compare the adjacent elments
		for(j=0;j<n;j++)
		{
	 		// swapping
			if(arr[j]>arr[j+1])
			{
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	// print on the screen
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
	
				
	
