/* Write a program to find the power of n */

#include<stdio.h>


int power(int base,int result)
{
	int cnt=0;
	int temp=result;
	while(temp>=1)
	{
		temp=result/base;
		result=temp;
		cnt++;
	}
	
	printf("Exponent is %d ", cnt-1);
}

	
int main()
	{
	int Base, Result;
	
	printf("Enter base (a): ");	
	
	scanf("%d", &Base);
	
	printf("Enter result (a^b): ");
	
	scanf("%d", &Result);
	
	power(Base,Result);
	}
