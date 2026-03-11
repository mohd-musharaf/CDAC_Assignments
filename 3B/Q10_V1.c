/* Write a program to count the digit of n numbers */

#include<stdio.h>
int digit(int num);

int main()
{
	int Num;
	printf("Enter num to find digit count: ");
	scanf("%d",&Num);
	digit(Num);
}

int digit(int num)
{
	int cnt =0;
	while(num!=0)
	{
	     num=num/10;
	     cnt++;
	}
	printf("The number of digits are: %d\n",cnt);


}
