//Find out given year is a leap or not.
#include<stdio.h>
int main()
{
	int year;
	printf("Enter a year: ");	//taking input as an year
	scanf("%d",&year);

if(year%4 == 0 && year%100 != 0 || year%400 == 0)			// if condition satisfied
{
	printf("%d  is a leap year!\n",year);  // it will print as leap year 
}

else
{
	printf("%d is not a leap year!\n",year);     // if condition not satisfied will print as not a leap year
}
return 0;
}

