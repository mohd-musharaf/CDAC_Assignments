/* Implement a c program to print fibonacci series
*/

#include"stdio.h"
int main()
{
	int n,i;
	int first=0, second=1, next;  	//intializing first and sencond values of series
	
		printf("Enter number of terms: ");		//taking the limit of series from user
		scanf("%d",&n);
		printf("Fibonacci series:");	//printing series output
		
		for(i=1;i<=n;i++)
		{
		printf(" %d  ",first);		//printing the output series one by one
		next=first + second;		// adding first and second terms to find third term
		first = second;		//assigning value of second term to first
		second=next;			//assigning value of next to second
		
		}
		printf(" \n");			//printing new line 
		return 0;
}

