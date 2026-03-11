/* Implement a C program to check given number is perfect or not*/

#include<stdio.h>
int main()
{
int num,i;			//initializing
int divisor=0,half;

printf("Enter a number:");
scanf("%d",&num);		//taking user input
	for(i=1;i<=num;i++)
	{
		if(num%i==0)		//comapring remainder with zero 
		{
			divisor=divisor+i;	//if remainder is zero then number will be added 
		}
	}
	//printf("%d",divisor);
	half=(divisor)/2;     			//storing half of divisor into var half
	
	if(half==num)				//comparing  with user input number
		{
		printf("%d is perfect number",num);		//number will 
		}
	else 
		{
		printf("%d is not perfect",num);
		}
	return 0;
}
