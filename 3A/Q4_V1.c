/*Write a program to find the factorial of n 

260240130025
260240130037

*/

//Calculate the factorial of given number

#include<stdio.h>
void factorial(int num);
int main()
{	int num ;
	
	
	//Enter input
	printf("Enter the number\n");
	scanf("%d",&num);
	
	factorial(num);
	
	return 0;
}

void factorial(int num)
{
	long long fact=1 ;
	for(int i=1; i<=num; i++)
	{
		fact=fact*i;
	}
	
	printf("Factorial of number is : %lld\n",fact);
}


