/*Write a program to find the factorial of n */

#include<stdio.h>

int fact(int n);
int main(void)
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int result=fact(n);
	printf("Factorial: %d\n",result);
	return 0;
}

int fact(int n)
{
	if(n>1)
	{
		return (n * fact(n-1));
	}
	else
	{
		return n;
	}

}
