/* Write a program to implement the display and reverse display functions for integer array elements


 */




#include<stdio.h>

int display(int array[], int size);
int rev_display(int array[], int size);
int main(void)
{
	int index;
	
	printf("Enter the Index : \n");
	scanf("%d",&index);
	int array[index];
	
	for (int i=0;i<index;i++)
	{
		printf("Enter the value At index %d is : ",i);
		scanf("%d",&array[i]);
	}
	display(array, index);
	rev_display(array, index);
	
}

int display(int array[] , int size) 
{
	printf("Elements of array is :");
	for (int i=0; i<size; i++)
	{
		printf("Value at index %d is : %d \n",i,array[i]);
		
	}
	return 0;
}

int rev_display(int array[] , int size) 
{
	printf("Elements of array in reversed is  :");
	for (int i=size-1; i>=0; i--)
	{
		printf("Value at index %d is : %d \n",i,array[i]);
		
	}
	return 0;
}
