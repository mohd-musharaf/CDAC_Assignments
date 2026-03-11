/*Write a program to find the GCD of numbers.*/

#include<stdio.h>

int gcd(int a, int b){

while(b!=0)
{
//int a;
int temp = b;
b=a%b;
a=temp;
}
return a;
}

int main()
{
	int num1, num2;
	printf("Enter 1st numbers: ");
	scanf("%d",&num1);
	printf("Enter 2nd numbers: ");
	scanf("%d",&num2);
	//int result = gcd(num1,num2);
	printf("The GCD of %d and %d = %d\n", num1, num2, gcd(num1,num2));
	return 0;
}
