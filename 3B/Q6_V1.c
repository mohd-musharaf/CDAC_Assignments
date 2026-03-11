/*Write a program to print the fibonacci series
260240130025
260240130037

*/

/*
	Implement a C program to print Fibonacci series ( 0, 1, 1, 2, 3, 5, 8,13, 21, 34 ..... )
	
	PRN 1: 260240130023
	PRN 2: 260240130043
*/



#include<stdio.h>

void fibonacci(int,int,int);

int main(void)
{
	int num1, num2,range;
	
	num1 = 0;
	num2 = 1;
	
	//Input
	printf("Enter range of fibonacci series  : ");
	scanf("%d", &range);
	

	printf("%d %d ", num1,num2);
	fibonacci(range,num1,num2);
	
	return 0;

}
//Fibonacci series genertion
void fibonacci(int range, int num1, int num2)
{
	int next;
	for(int i=1;i<range;i++)
	{
		
		next = num1 + num2;
		printf("%d ", next);
		num1 = num2;
		num2 = next;	
		
	}
	printf("\n");
}
