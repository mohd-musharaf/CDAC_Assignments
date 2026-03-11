/*
Implement a C program to check given no. is armstrong or not
*/


#include<stdio.h>
#include<math.h>

//function declaration
void armstrong(int);

int main()
{	int a;
	printf("Enter a number to find armstrong number: ");
	scanf("%d",&a);
	armstrong(a);
	return 0;
}
//function for armstrong number
void armstrong(int x)
{
	int y=x;
	int ls;
	int count=0;
	int arm=0;
	while(x>0)
	{
		ls=x%10;
		x=x/10;
		count++;
	}

	x=y;
  	int power=count;
	while(count>0)
	{
		ls=x%10;
		x=x/10;
		arm+= (int)pow(ls,power);
		count--;
	}
	if(y==arm)
	{
		printf("It is a armstrong number");
	}
	else
	{
		printf("It is not a armstrong number");
	}	
	
}
