/*Write C program to swap two numbers without using a third variable*/

#include"stdio.h"
int main()
{
	int i=10,j=20;
	printf("The numbers before swap are i=%d and j= %d\n",i,j);		
	i=i+j;	
	j=i-j;
	i=i-j;
	printf("The numbers after swap are i=%d and j=%d\n",i,j);
        return 0;	
}

