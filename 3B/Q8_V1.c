/* Write a program to  count the number of 1s or the number of 0s in a binary code */
#include <stdio.h>

void count(long x)
	{
	long temp = x;
	int one=0, zero=0;
	while(temp != 0)
		{
		if(temp%10 == 1)
			{
			one++;
			}
		else if (temp%10== 0)
			{
			zero++;
			}
		else
			{
			printf("non binary");
			return;
			}
		temp = temp/10;
		}
		printf("number of ones:%d\n",one);
		printf("number of zero:%d\n",zero);
	}
int main()
{
long num;
printf("Enter a binary number:");
scanf("%ld",&num);
count(num);
return 0;
}
	
