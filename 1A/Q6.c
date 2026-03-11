// find the sum and average of n numbers
#include "stdio.h"
int main(){
	int n,i;
	float num,sum=0,avg;
	
	printf("Total count of numbers?  ");   //taking n number of inputs
	scanf("%d",&n)

	
	

	for(i=1;i<=n;i++)
	{	   
	 printf("Enter number %d:",i);
	 scanf("%f",&num);
	 sum += num;
	 }
	 
	 avg=sum/n;
	 
	 printf("\nSum=%f",sum);		//printing summation of input numbers
	 printf("\nAverage=%f\n", avg);	//printing average of input numbers
	 
	 return 0;
	 }	 

