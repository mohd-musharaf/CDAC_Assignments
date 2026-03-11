/*Write a program to find sum of n numbers
260240130025
260240130037*/


#include<stdio.h>
int sum_upto_n(int n)
{
	if(n <= 1)
	return n;
	return n+ sum_upto_n(n-1);
}
int main()
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);

	int result = sum_upto_n(n);
	printf("Sum from 1 to %d = %d\n", n, result);
	return 0;
		

}

