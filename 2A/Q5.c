#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter your number: ");	
	scanf(" %d",&n);			//input taken

	for(i=1;i<=n;i++)
	{
		if(n%i==0)		//checking remainder is zero or not
		{
		count++;		//if zero then incrementing by one and stored in variable count
					//			
		}
		
	}
	if(count>2)			//checking count ie. divisor, if more than two then the number is not prime		
	{
		printf("Number %d is not a prime number",n);			//printing not prime
	}
	else
	{
		printf("Number %d is a prime number",n);			//printing prime
	}
}
