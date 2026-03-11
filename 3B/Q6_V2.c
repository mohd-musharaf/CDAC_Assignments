 /*Write a program to print the fibonacci series
260240130025
260240130037
*/

#include<stdio.h>
int fibonacci(int);
int main()
{
int value;
printf("! Fibonacci Series !\n");

printf("Enter the Value:");
scanf("%d",&value);

for(int i=0; i<value ; i++)
{
printf("%d\t",fibonacci(i));
}
printf("\n");
return 0;
}

int fibonacci(int n)
{
if(n==0)
	return 0;
	
else if(n==1)
	return 1;
	
	return fibonacci(n-1)+fibonacci(n-2);
}
