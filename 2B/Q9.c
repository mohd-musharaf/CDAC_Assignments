
/* implement a C program to have recursive sum of digits in a number*/
#include<stdio.h>
int getCount(int);
int recursiveSum(int);

int main()
{
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	
	int result=recursiveSum(num);
	
	printf("The sum is:%d\n",result);
	return 0;
}
	
	int getCount(int number)
{
	int count=0;
	while(number!=0)
{
	number=number/10;
	count++;
}
	return count;
}
	
	int recursiveSum(int number)
{
	int no_of_digits=getCount(number);
	int sum=0;

	
	for(int i=0;i<no_of_digits;i++)
{
	sum+=number%10;
	number/=10;
}
	if(sum<10)
{
	return sum;
}
	else
{
recursiveSum(sum);
}

}

















