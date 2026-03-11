/* Write a program to implement the display and reverse display functions for integer array elements

260240130025
260240130037
 */

#include<stdio.h>

int rev(int *arr, int size, int index);
int display(int *arr, int size, int index);

int main()
{
	int num, arr[5];
	printf("\nEnter elements of array:\n");
	
	for(int i=0;i<5;i++)
	{
		printf("Enter %d number: ",i+1);
		scanf("%d",&num);
		arr[i]=num;
		
	}
	
	printf("\nArray is :\n");
	display(arr,5,0);
	rev(arr,5,0);

}

int rev(int *arr, int size, int index)
{
	if(index==size)
	{
	printf("Reversed array is: \n");
	return 0;
	}
	rev(arr,5,index+1);
	printf("%d\n",arr[index]);
}

int display(int *arr, int size, int index)
{
	if(index==size)
	{
		return 0;
	}
	
	printf("%d\n",arr[index]);
	display(arr,5,index+1);
	
}

