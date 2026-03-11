/*Write a program to find sum of n numbers

260240130025
260240130037

*/



#include<stdio.h>

void sum(int);
int main(void)
{
	int n;
	printf("Enter total numbers to sum  :");
	scanf("%d", &n);
	
	printf("Enter %d numbers\n", n);
	sum(n);
	
}

void sum(int n)
{
	int result=0, j;
	for(int i =1 ;i<=n;i++)
	{
		printf("Enter %d number :", i);
		scanf("%d", &j);
		result += j;
	}
	printf("Sum is %d\n", result);
	
}

