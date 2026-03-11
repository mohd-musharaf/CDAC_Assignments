/*Write a C program for reversing a three digit number*/
#include<stdio.h>
int main()
{
	int num,a,b,c,rev;
	printf("Enter three digit number:");
	scanf("%d",&num);	// taking an input from user in three digits 
	a=num%10;       
	b=(num/10)%10;
	c=num/100;
	rev=(100*a)+(10*b)+c;
	printf("Reverse number: %d\n",rev);	// printing the reverse of the provided input
	return 0;
}

